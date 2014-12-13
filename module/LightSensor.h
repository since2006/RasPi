/*
 * LightSensor.h
 *
 *  Xuz @ 2014-12-14
 */

/*
		RasPi                            Light Sensor
3.3v		Pin1								VCC
GND		Pin6								GND
GPIO4	Pin7								DO
*/

#ifndef MODULE_LIGHTSENSOR_H_
#define MODULE_LIGHTSENSOR_H_

/**
 * Light sensor detected light ?
 */
int hasLight(int pin);

#endif /* MODULE_LIGHTSENSOR_H_ */
