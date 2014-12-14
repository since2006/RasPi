/*
 * SoundSensor.c
 *
 *  Xuz @ 2014-12-14
 */

#include <stdio.h>
#include <wiringPi.h>

int hasSound(int pin) {

	pinMode(pin, INPUT);
	int status = digitalRead(pin);

	if (status == 0) {
		// has sound
		return 1;
	}

	return 0;
}
