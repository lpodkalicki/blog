#!/usr/bin/env python

import math

F_CPU = 16000000
TIMER_BITS = 16

dds_prescalers = [0, 3, 6, 8, 10]
timer_max = 2**TIMER_BITS - 1

def dds_calc(freq):
	ret_err = 100
	ret_OCRnx = 0
	ret_freq = 0
	ret_N = 0

	for N in dds_prescalers:
		OCRnx_calc = round( ((F_CPU >> (N + 1)) * 1.0 / freq) - 1.);
		if OCRnx_calc >= 0 and  OCRnx_calc < timer_max:
			freq_calc = round( (F_CPU >> (N + 1)) / (OCRnx_calc + 1))
			if freq > freq_calc:
				err = (1 - (freq_calc / freq)) * -100
			else:
				err = (1 - (freq / freq_calc)) * 100
			if abs(err) < ret_err:
				ret_err = err
				ret_freq = freq_calc
				ret_OCRnx = OCRnx_calc
				ret_N = N
	
	return (ret_err, ret_freq, ret_N, ret_OCRnx)
					

if __name__ == "__main__":

	sum = 0.0
	num = 0
	min = None
	max = None

	for freq in range(1, 25000):
		err, f, N, OCRnx = dds_calc(freq)
		print("err=%0.4f%%\t P=%s\t OCRnx=%s\t %s/%s [Hz]" % (err, 1 << N, int(OCRnx), freq, int(f)))
		val = abs(err)
		if max is None or val > max:
			max = val
		elif min is None or val < min:
			min = val
		sum += val
		num += 1
	
	print("Min error = %0.8f%%" % min)
	print("Avg error = %0.8f%%" % (sum / num))
	print("Max error = %0.8f%%" % max)
