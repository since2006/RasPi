/*
 * Main.c
 *
 *  Xuz @ 2014-12-13
 */
#include <CpuTemp.h>
#include <Led.h>
#include <LightSensor.h>

int main(void) {
	double cpuTemp = getCpuTemp();
	printf("cpu temp: %.2f\n", cpuTemp);

	setLedFlash(0, 3);

	while (1) {
		int light = hasLight(7);
		printf("has light: %d\n", light);

		delay(500);
	}

	return 0;
}
