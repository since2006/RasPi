/*
 * Led.c
 *
 *  Xuz @ 2014-12-13
 */
#include <wiringPi.h>
#include <stdio.h>
#include <pthread.h>

void setLedOn(int pin) {

	pinMode(pin, OUTPUT);
	digitalWrite(pin, HIGH);

}

void setLedOff(int pin) {

	pinMode(pin, OUTPUT);
	digitalWrite(pin, LOW);

}

// ---------------------------------------------------------------------------------------------

struct flashParam {

	int pin;

	int times;

	int delay;
};

void *thread_flash(void *arg) {
	struct flashParam *param;
	param = (struct flashParam *) arg;
	int pin = param->pin;
	int times = param->times;
	int d= param->delay;

	if (wiringPiSetup() == -1) {
		fprintf(stderr, "failed to setup wiringPi\n");
		return ((void *)0);
	}

	pinMode(pin, OUTPUT);

	int i;
	for (i = 0; i < times; i++) {
		digitalWrite(pin, HIGH);
		delay(d);
		digitalWrite(pin, LOW);
		delay(d);
	}

	return ((void *)0);
}

void setLedFlash(int pin, int times) {
	struct flashParam arg = {.pin = pin, .times = times, .delay =  500 };

	pthread_t thread;

	pthread_create(&thread, NULL, thread_flash, &(arg));

	pthread_join(thread, NULL);
}
