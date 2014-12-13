/*
 * CpuTemp.c
 *
 *  Xuz @ 2014-12-13
 */
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MAX_SIZE 32

double getCpuTemp() {
	int fd;
	double temp = 0.0;
	char buf[MAX_SIZE];

	fd = open("/sys/class/thermal/thermal_zone0/temp", O_RDONLY);
	if (fd < 0) {
        fprintf(stderr, "failed to open thermal_zone0/temp\n");
		return -1;
	}

	if (read(fd, buf, MAX_SIZE) < 0) {
        fprintf(stderr, "failed to read temp\n");
		return -1;
	}

	temp = atoi(buf) / 1000.0;

	close(fd);

	return temp;
}
