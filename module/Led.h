/*
 * Led.h
 *
 *  Xuz @ 2014-12-13
 *
 * mapping of the Raspberry Pi GPIO Pins
 * https://projects.drogon.net/raspberry-pi/wiringpi/pins/
 * pin 0 is header 11
 */

#ifndef MODULE_LED
#define MODULE_LED

/**
 * turn on LED
 */
void setLedOn(int pin);

/**
 * turn off LED
 */
void setLedOff(int pin);

/**
 * flash LED 'X' times
 */
void setLedFlash(int pin, int times);

#endif /* MODULE_LED */
