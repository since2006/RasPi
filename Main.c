/*
 * Main.c
 *
 *  Xuz @ 2014-12-13
 */
#include <CpuTemp.h>
#include <Led.h>

int main(void) {
	double cpuTemp = getCpuTemp();
	printf("cpu temp: %.2f\n", cpuTemp);

	setLedFlash(0, 3);

	return 0;
}
