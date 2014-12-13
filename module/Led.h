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

void setLedOn(int pin);

void setLedOff(int pin);

#endif /* MODULE_LED */
