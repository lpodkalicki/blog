/**
 * Copyright (c) 2019, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ESP8266/010
 * Example of WiFi Beacon Spammer.
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_wifi.h"
#include "esp_event_loop.h"
#include "esp_log.h"
#include "esp_system.h"
#include "esp_err.h"

typedef struct {
	uint16_t version:2;
	uint16_t type:2;
	uint16_t subtype:4;
	uint16_t to_ds:1;
	uint16_t from_ds:1;
	uint16_t mf:1;
	uint16_t retry:1;
	uint16_t pwr:1;
	uint16_t more:1;
	uint16_t w:1;
	uint16_t o:1;
} wifi_ieee80211_frame_ctrl_t;

typedef struct {
	wifi_ieee80211_frame_ctrl_t frame_ctrl;
	uint16_t duration;
	uint8_t da[6];
	uint8_t sa[6];
	uint8_t bssid[6];
	uint16_t seq_ctrl;
} wifi_ieee80211_hdr_t;

/* linux sources */
typedef struct {
	uint8_t timestamp[8];
	uint16_t beacon_int;
	uint16_t capab_info;
	/* followed by some of SSID, Supported rates,
	 * FH Params, DS Params, CF Params, IBSS Params, TIM */
	uint8_t variable[0];
} wifi_ieee80211_mgmt_beacon_t;

typedef struct {
	uint8_t element_id;
	uint8_t len;
	uint8_t variable[0];
} wifi_ieee80211_element_t;


static const char *TAG = "spammer";
static const char *names[] = {
	"1 - hello",
	"2 - it's me",
	"3 - your wifi",
	"4 - I'm talking to you",
};

static esp_err_t event_handler(void *ctx, system_event_t *event);
static void spammer_task(void *prv);

void
app_main(void)
{

	tcpip_adapter_init();
	ESP_ERROR_CHECK(esp_event_loop_init(event_handler, NULL));
	wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
	ESP_ERROR_CHECK(esp_wifi_init(&cfg));
	ESP_ERROR_CHECK(esp_wifi_start());

	ESP_LOGI(TAG, "ESP-IDF version:%s\n", esp_get_idf_version());
	for (uint8_t i = 0; i < sizeof(names)/sizeof(names[0]); ++i) {
		ESP_LOGI(TAG, "SSID[%d]=%s", i, names[i]);
	}

	xTaskCreate(spammer_task, "spammer_task", 4096, NULL, 5, NULL);
}

esp_err_t
event_handler(void *ctx, system_event_t *event)
{

    return ESP_OK;
}

static size_t
create_beacon_packet(const char *ssid, uint8_t id, uint8_t *buff, size_t buffsize)
{

	if (buff == NULL || buffsize < (60 + strlen(ssid))) {
		return (-1);
	}

	size_t len = 0;

	/* header */
	wifi_ieee80211_hdr_t *hdr = (wifi_ieee80211_hdr_t *)buff;
	memset(hdr, 0, sizeof(wifi_ieee80211_hdr_t));
	*hdr = (wifi_ieee80211_hdr_t) {
		.frame_ctrl = (wifi_ieee80211_frame_ctrl_t) {
			.subtype = 0x8 // beacon
		},
		.duration = 0,
		.da = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff}, // destination address (broadcast)
		.sa = {0xba, 0xde, 0xaf, 0xfe, 0x00, id}, // source address (fake)
		.bssid = {0xba, 0xde, 0xaf, 0xfe, 0x00, id}, // BSSID (fake)
	};
	len += sizeof(wifi_ieee80211_hdr_t);

	/* beacon */
	wifi_ieee80211_mgmt_beacon_t *beacon = (wifi_ieee80211_mgmt_beacon_t *)(buff + len);
	memset(beacon, 0, sizeof(wifi_ieee80211_mgmt_beacon_t));
	beacon->beacon_int = 100; // 100TU = 102.4 milliseconds
	beacon->capab_info = 0b00110001 << 8 | 0b00000100; // capabilities subfields
	len += sizeof(wifi_ieee80211_mgmt_beacon_t);

	/* SSID */
	wifi_ieee80211_element_t *element = (wifi_ieee80211_element_t *)(buff + len);
	element->element_id = 0x00; // id of SSID element
	element->len = strlen(ssid);
	memcpy(element->variable, ssid, element->len);
	len += sizeof(wifi_ieee80211_element_t) + element->len;

	/* supported rates */
	element = (wifi_ieee80211_element_t *)(buff + len);
	element->element_id = 0x01; // id of Supported Rates
	element->len = 8;
	memcpy(element->variable, (const uint8_t[]){0x82, 0x84, 0x8b, 0x96, 0x0c, 0x12, 0x18, 0x24}, element->len);
	len += sizeof(wifi_ieee80211_element_t) + element->len;

	/* DS parameters */
	uint8_t channel;
	esp_wifi_get_channel(&channel, NULL);
	element = (wifi_ieee80211_element_t *)(buff + len);
	element->element_id = 0x03; // id of DS params
	element->len = 1;
	memcpy(element->variable, (const uint8_t[]){channel}, element->len);
	len += sizeof(wifi_ieee80211_element_t) + element->len;

	/* traffic indication map */
	element = (wifi_ieee80211_element_t *)(buff + len);
	element->element_id = 0x05; // id of Traffic Indication Map
	element->len = 4;
	memcpy(element->variable, (const uint8_t[]){0x01, 0x02, 0x00, 0x00}, element->len);
	len += sizeof(wifi_ieee80211_element_t) + element->len;

	return len;
}

static void
xmit_beacon(const char *ssid, uint8_t id)
{
	size_t len;
        uint8_t buff[128];

	len = create_beacon_packet(ssid, id, buff, sizeof(buff));
	for (uint8_t i = 0; i < 5; ++i) { // sending the same packet 5 times
		esp_wifi_send_pkt_freedom(buff, len, 1);
		vTaskDelay(1 / portTICK_PERIOD_MS);
	}
}

void
spammer_task(void *prv)
{

	while (1) {
		/* repeating the process 10 times gives better result! ;) */
		for (uint8_t i = 0; i < 10; ++i) { 
			for (uint8_t j = 0; j < sizeof(names)/sizeof(names[0]); ++j) {
				xmit_beacon(names[j], j);
			}
		}
		vTaskDelay(10 / portTICK_PERIOD_MS);
	}
}

