/*
 * LightSensor.c
 *
 *  Xuz @ 2014-12-14
 */
#include <stdio.h>
#include <wiringPi.h>

int hasLight(int pin) {

	if (wiringPiSetup() == -1) {
		fprintf(stderr, "failed to setup wiringPi\n");
		return -1;
	}

	pinMode(pin, INPUT);
	int status = digitalRead(pin);

	if (status == 0) {
		// has light
		return 1;
	}

	return 0;
}
