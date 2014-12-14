/*
 * Gpio.c
 *
 *  Xuz @ 2014-12-14
 */

#include <stdio.h>
#include <wiringPi.h>

int initGpio() {
	int result = wiringPiSetup() ;

	if (result == -1) {
		fprintf(stderr, "failed to setup wiringPi\n");
	}

	return result;
}
