/*
 * Led.c
 *
 *  Xuz @ 2014-12-13
 */
#include <wiringPi.h>
#include <stdio.h>

void setLedOn(int pin) {

	if (wiringPiSetup() == -1) {
        fprintf(stderr, "failed to setup wiringPi\n");
		return;
	}
	pinMode(pin, OUTPUT);
	digitalWrite(pin, HIGH);

}

void setLedOff(int pin) {

	if (wiringPiSetup() == -1) {
        fprintf(stderr, "failed to setup wiringPi\n");
		return;
	}
	pinMode(pin, OUTPUT);
	digitalWrite(pin, LOW);

}
