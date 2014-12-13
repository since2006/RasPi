/*
 * CpuTemp.c
 *
 *  Xuz @ 2014-12-13
 */
#include <CpuTemp.h>
#include <Led.h>

int main(void) {
	double cpuTemp = getCpuTemp();
	printf("cpu temp: %.2f\n", cpuTemp);

	while (1) {
		setLedOn(0);
		delay(500);

		setLedOff(0);
		delay(500);
	}
}
