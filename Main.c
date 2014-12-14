/*
 * Main.c
 *
 *  Xuz @ 2014-12-13
 */
#include <CpuTemp.h>
#include <Gpio.h>
#include <Led.h>
#include <LightSensor.h>
#include <SoundSensor.h>

int main(void) {
	double cpuTemp = getCpuTemp();
	printf("cpu temp: %.2f\n", cpuTemp);

	if (initGpio() == -1) {
		exit(1);
	}

	setLedFlash(0, 3);

	while (1) {
		int light = hasLight(7);
		int sound = hasSound(1);
		printf("has light: %d, has sound: %d\n", light, sound);

		delay(100);
	}

	return 0;
}
