#!/usr/bin/env python

import serial
import time


class Client:

	def __init__(self, port="/dev/ttyUSB0"):
		self.port = serial.Serial(
        		port=port,
        		baudrate=19200,
        		stopbits=serial.STOPBITS_ONE,
        		bytesize=serial.EIGHTBITS)

	def loop(self):
		while True:
			req = "%s\r\n" % raw_input("client$ ")
			n = self.port.write(req)
			print "Sent %d bytes" % n
			time.sleep(0.01)
			rep = self.port.readline()
			print "Received %d bytes, rep=\"%s\"" % (len(rep), rep.replace("\r\n", ""))
			

if __name__ == '__main__':
 	Client().loop()
