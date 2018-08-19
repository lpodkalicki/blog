/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny85/001
 * Simple blinky with delay function.
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/eeprom.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <avr/wdt.h>
#include "random.h"
#include "usbdrv/usbdrv.h"

#define	BUTTON_PIN	PB0
#define	EVT_IDLE	(0)
#define	EVT_KEY_PRESS	(1)
#define	EVT_KEY_RELEASE	(2)
#define	PASSWORD_LEN	(16)

/* Derived from the IRKey */
const PROGMEM char usbHidReportDescriptor[USB_CFG_HID_REPORT_DESCRIPTOR_LENGTH] = {
    0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
    0x09, 0x06,                    // USAGE (Keyboard)
    0xa1, 0x01,                    // COLLECTION (Application)
    0x75, 0x01,                    //   REPORT_SIZE (1)
    0x95, 0x08,                    //   REPORT_COUNT (8)
    0x05, 0x07,                    //   USAGE_PAGE (Keyboard)(Key Codes)
    0x19, 0xe0,                    //   USAGE_MINIMUM (Keyboard LeftControl)(224)
    0x29, 0xe7,                    //   USAGE_MAXIMUM (Keyboard Right GUI)(231)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x25, 0x01,                    //   LOGICAL_MAXIMUM (1)
    0x81, 0x02,                    //   INPUT (Data,Var,Abs) ; Modifier byte
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x75, 0x08,                    //   REPORT_SIZE (8)
    0x81, 0x03,                    //   INPUT (Cnst,Var,Abs) ; Reserved byte
    0x95, 0x05,                    //   REPORT_COUNT (5)
    0x75, 0x01,                    //   REPORT_SIZE (1)
    0x05, 0x08,                    //   USAGE_PAGE (LEDs)
    0x19, 0x01,                    //   USAGE_MINIMUM (Num Lock)
    0x29, 0x05,                    //   USAGE_MAXIMUM (Kana)
    0x91, 0x02,                    //   OUTPUT (Data,Var,Abs) ; LED report
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x75, 0x03,                    //   REPORT_SIZE (3)
    0x91, 0x03,                    //   OUTPUT (Cnst,Var,Abs) ; LED report padding
    0x95, 0x06,                    //   REPORT_COUNT (6)
    0x75, 0x08,                    //   REPORT_SIZE (8)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x25, 0x65,                    //   LOGICAL_MAXIMUM (101)
    0x05, 0x07,                    //   USAGE_PAGE (Keyboard)(Key Codes)
    0x19, 0x00,                    //   USAGE_MINIMUM (Reserved (no event indicated))(0)
    0x29, 0x65,                    //   USAGE_MAXIMUM (Keyboard Application)(101)
    0x81, 0x00,                    //   INPUT (Data,Ary,Abs)
    0xc0                           // END_COLLECTION
};

typedef struct {
	uint8_t modifier;
	uint8_t reserved;
	uint8_t keycode[6];
} keyboard_report_t;

static void build_report(char c);
static void generate_password(void);

static keyboard_report_t keyboard_report; // sent to PC
static uint8_t   idleRate = 500 / 4;   // idleRate is defined in 4ms increments.
                                     // We need 500 ms to satisfy 7.2.4
                                     // HID1_11.pdf
static uint8_t protocolVersion = 0;  //
static uint8_t state = 0;
static const uint8_t alphabet[] = {
	'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
	'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '=', '|', '\\', '/', '.', ',', ':', ';', '~', '\'',
};
static uint8_t password[PASSWORD_LEN];
static uint8_t password_idx = 0;

/*
// usbFunctionSetup: Handle incoming responses from the system.
// From: http://vusb.wikidot.com/driver-api (code styling derived from Adafruit IRKey)
*/
uint8_t
usbFunctionSetup(uint8_t data[8])
{
	usbRequest_t *rq = (void *)data;

	/* Reject if not class request */
	if((rq->bmRequestType & USBRQ_TYPE_MASK) != USBRQ_TYPE_CLASS) {
		return 0;
	}

	switch(rq->bRequest) {
	case USBRQ_HID_GET_REPORT:
		usbMsgPtr = (void *)&keyboard_report;
		keyboard_report.modifier = 0;
		keyboard_report.keycode[0] = 0;
		return sizeof(keyboard_report);
	case USBRQ_HID_SET_REPORT:
		if (rq->wLength.word == 1) {
			/* check data is available
			   1 byte, we don't check report type (it can only be output or feature)
			   we never implemented "feature" reports so it can't be feature
			   so assume "output" reports
			   this means set LED status
			   since it's the only one in the descriptor */
			return USB_NO_MSG; // send nothing but call usbFunctionWrite
		} else { // no data or do not understand data, ignore
			return 0; // send nothing
		}
	case USBRQ_HID_GET_IDLE:
		usbMsgPtr = &idleRate;
		return 1;
	case USBRQ_HID_SET_IDLE:
		idleRate = rq->wValue.bytes[1];
		return 0;
	case USBRQ_HID_GET_PROTOCOL:
		usbMsgPtr = &protocolVersion;
		return 1;
	case USBRQ_HID_SET_PROTOCOL:
		protocolVersion = rq->wValue.bytes[1];
		return 0;
	default:
		return 0;
  	}
}

usbMsgLen_t
usbFunctionWrite(uint8_t *data, uint8_t len)
{

	if (state != data[0]) {
		state = data[0];
	}

	return (1);
}

static uint8_t
read_keys(void)
{

	if ((PINB & _BV(BUTTON_PIN)) == 0) {
		return (1);
	}

	return (0);
}

int
main(void)
{
	uint8_t i, keys, event, calibration_value;

	/* setup */
	DDRB &= ~_BV(BUTTON_PIN); // set button pin as input
	PORTB |= _BV(BUTTON_PIN); // set pull-up resistor

	wdt_enable(WDTO_1S);

	calibration_value = eeprom_read_byte(0); // calibration value from last restart
	if (calibration_value != 0xFF) {
	    OSCCAL = calibration_value;
	}

	usbInit();
	usbDeviceDisconnect();
	for(i = 0; i < 250; ++i) { // wait 500 ms
		wdt_reset(); // keep the watchdog happy
		_delay_ms(2);
	}
	usbDeviceConnect();
	sei();

	/* loop */
	event = EVT_IDLE;
	while (1) {
		wdt_reset();
        	usbPoll();

		keys = read_keys();
		if (keys && event == EVT_IDLE) {
			generate_password();
			password_idx = 0;
			event = EVT_KEY_PRESS;
		}

		if (usbInterruptIsReady() && event != EVT_IDLE) {
			switch(event) {	
			case EVT_KEY_PRESS:
				build_report(password[password_idx++]);
				event = EVT_KEY_RELEASE;
				break;
			case EVT_KEY_RELEASE:
				build_report(0);
				event = (password_idx >= PASSWORD_LEN) ? EVT_IDLE : EVT_KEY_PRESS;
				break;
			default:
				event = EVT_IDLE;
				break;
			}
			usbSetInterrupt((void *)&keyboard_report, sizeof(keyboard_report));
		}
	}
}

void
calibrate_oscillator(void)
{
	uint8_t step = 128;
	uint8_t trial_value = 0, optimum_value;
	int x, optimum_dev, target_value = (unsigned)(1499 * (double)F_CPU / 10.5e6 + 0.5);
	/* do a binary search: */
	do {
		OSCCAL = trial_value + step;
		x = usbMeasureFrameLength(); // proportional to current real frequency
		if (x < target_value) { // frequency still too low
			trial_value += step;
		}
		step >>= 1;
	} while (step > 0);
	/* We have a precision of +/- 1 for optimum OSCCAL here
	   now do a neighborhood search for optimum value */
	optimum_value = trial_value;
	optimum_dev = x; // this is certainly far away from optimum
	for (OSCCAL = trial_value - 1; OSCCAL <= trial_value + 1; OSCCAL++) {
		x = usbMeasureFrameLength() - target_value;
		if (x < 0)
			x = -x;
		if (x < optimum_dev) {
			optimum_dev = x;
			optimum_value = OSCCAL;
		}
	}
	OSCCAL = optimum_value;
}

void
hadUsbReset(void)
{
	cli();  // usbMeasureFrameLength() counts CPU cycles, so disable interrupts.
	calibrate_oscillator();
	sei();
	eeprom_write_byte(0, OSCCAL); // store the calibrated value in EEPROM
}

void
generate_password(void)
{
	uint8_t i, len;
	uint16_t value;	

	random_init(OSCCAL);

	for (i = 0, len = sizeof(alphabet); i < PASSWORD_LEN; ++i) {
		value = random();
		password[i] = alphabet[value % len];
	}
}

/* function based on https://eleccelerator.com/usb-business-card/ */
void
build_report(char c)
{

	keyboard_report.modifier = 0;
	keyboard_report.keycode[0] = 0;

	if (c >= 'A' && c <= 'Z') {
		keyboard_report.keycode[0] = 4 + c - 'A'; // set letter
		if (bit_is_set(state, 1)) { // if caps is on
			keyboard_report.modifier = 0x00; // no shift
		} else {
			keyboard_report.modifier = _BV(1); // hold shift
		}
	} else if (c >= 'a' && c <= 'z') {
		keyboard_report.keycode[0] = 4 + c - 'a'; // set letter
		if (bit_is_set(state, 1)) { // if caps is on
			keyboard_report.modifier = _BV(1); // hold shift
		} else {
			keyboard_report.modifier = 0x00; // no shift
		}
	} else if (c >= '0' && c <= '9') {
		keyboard_report.modifier = 0x00;
		if (c == '0') {
			keyboard_report.keycode[0] = 39;
		} else {
			keyboard_report.keycode[0] = 30 + c - '1';
		}
	} else {
		switch (c) { // convert ascii to keycode according to documentation
		case '!':
			keyboard_report.modifier = _BV(1); // hold shift
			keyboard_report.keycode[0] = 29 + 1;
			break;
		case '@':
			keyboard_report.modifier = _BV(1); // hold shift
			keyboard_report.keycode[0] = 29 + 2;
			break;
		case '#':
			keyboard_report.modifier = _BV(1); // hold shift
			keyboard_report.keycode[0] = 29 + 3;
			break;
		case '$':
			keyboard_report.modifier = _BV(1); // hold shift
			keyboard_report.keycode[0] = 29 + 4;
			break;
		case '%':
			keyboard_report.modifier = _BV(1); // hold shift
			keyboard_report.keycode[0] = 29 + 5;
			break;
		case '^':
			keyboard_report.modifier = _BV(1); // hold shift
			keyboard_report.keycode[0] = 29 + 6;
			break;
		case '&':
			keyboard_report.modifier = _BV(1); // hold shift
			keyboard_report.keycode[0] = 29 + 7;
			break;
		case '*':
			keyboard_report.modifier = _BV(1); // hold shift
			keyboard_report.keycode[0] = 29 + 8;
			break;
		case '(':
			keyboard_report.modifier = _BV(1); // hold shift
			keyboard_report.keycode[0] = 29 + 9;
			break;
		case ')':
			keyboard_report.modifier = _BV(1); // hold shift
			keyboard_report.keycode[0] = 0x27;
			break;
		case '~':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case '`':
			keyboard_report.keycode[0] = 0x35;
			break;
		case '_':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case '-':
			keyboard_report.keycode[0] = 0x2D;
			break;
		case '+':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case '=':
			keyboard_report.keycode[0] = 0x2E;
			break;
		case '{':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case '[':
			keyboard_report.keycode[0] = 0x2F;
			break;
		case '}':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case ']':
			keyboard_report.keycode[0] = 0x30;
			break;
		case '|':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case '\\':
			keyboard_report.keycode[0] = 0x31;
			break;
		case ':':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case ';':
			keyboard_report.keycode[0] = 0x33;
			break;
		case '"':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case '\'':
			keyboard_report.keycode[0] = 0x34;
			break;
		case '<':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case ',':
			keyboard_report.keycode[0] = 0x36;
			break;
		case '>':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case '.':
			keyboard_report.keycode[0] = 0x37;
			break;
		case '?':
			keyboard_report.modifier = _BV(1); // hold shift
			// fall through
		case '/':
			keyboard_report.keycode[0] = 0x38;
			break;
		case ' ':
			keyboard_report.keycode[0] = 0x2C;
			break;
		case '\t':
			keyboard_report.keycode[0] = 0x2B;
			break;
		case '\n':
			keyboard_report.keycode[0] = 0x28;
			break;
		}
	}
}

