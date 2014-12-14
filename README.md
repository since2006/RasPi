RasPi
=====

Raspberry Pi

****

Module
----
LED
```
  RasPi                     LED
GPIO17  Pin11               +
GND     Pin6                -
```

Sensor
----
Light Sensor
```
  RasPi                 Light Sensor
3.3v    Pin1                VCC
GND     Pin9                GND
GPIO4   Pin7                DO
```
Sound Sensor


****

Resources
----
Wiring Pi mapping of the Raspberry Pi GPIO Pins  
https://projects.drogon.net/raspberry-pi/wiringpi/pins/

Cross compiler  
http://hertaville.com/2012/09/28/development-environment-raspberry-pi-cross-compiler/

After cross-compile fast copy executable to Raspberry Pi for test  
scp /home/user/workspace/RasPi/Debug/RasPi pi@raspberrypi:/home/pi/RasPi/RasPi
