/*
 * CpuTemp.c
 *
 *  Xuz @ 2014-12-13
 */
#include <CpuTemp.h>

int main(void) {
	double cpuTemp = getCpuTemp();
	printf("cpu temp: %.2f\n", cpuTemp);
}
