SkretchNoise
============
Arduino project created during Kinetic Street Art workshop by Medialab in Katowice, Poland on 26th and 27th of September 2015.

About workshops
---------------

During workshops we have built interactive, kinetic sculptures placed in the street space, which movement is based on data collected in the real-time or saved earlier in a different form. Participants were divided in a small groups (2-3 people). Participants were thought how to collect data, use it, process it and animate it. Participats also learned how to program Arduino, work with basic electronics and servomechanisms.

Project overview
----------------

SkretchNoise is a deejay simulator device, which allows to generate noisy "music" with ping-pong balls (table tennis balls). To start playing we should place "vinyl" made from paper (or anything else) on the device. "Vinyl" will start to rotate itself, but we can also manipulate it. SkretchNoise detects holes in the "vinyl" and then stops playing. It allows to create different beats and rhytms.

How it works?
--------------

"Vinyl" is rotated by DC motor powered by 5V charger. Photoresistor is placed below the "vinyl". When hole in the "vinyl" is above the photoresistor, light intensity changes (becomes higher) and balls stops hitting in the box. When photoresitor is covered, light intensity is lower and balls keep hitting in the box.

Software
--------

- IDE: Arudino IDE can be installed on Linux with the command `sudo apt-get install arduino`.
- Required library for controlling servos: [Adafruit-PWM-Servo-Driver-Library](https://github.com/adafruit/Adafruit-PWM-Servo-Driver-Library)
- Library has to be placed in `/usr/share/arduino/libraries` and have rights to write and execute
- Source code of the program is located in `SkretchNoise.ino` file

Hardware
--------

### Components
- Arduino Uno board
- 3 servos
- 1 DC motor
- 1 photoresistor
- 1 resistor
- [Adafruit 16-Channel 12-bit PWM/Servo Driver - I2C interface - PCA9685](http://www.adafruit.com/products/815)
- 5 Volt charger for servos and DC motor
- USB charger for Arduino Uno board
- breadboard
- wires (cables)

### Conceptual scheme of the circuit

**Please note**: This scheme is conceptual! I know it's unprofessional.

![Conceptual scheme of the circuit](https://raw.githubusercontent.com/pwittchen/SkretchNoise/master/images/skretch-noise-scheme.png)

Photos
------

### Inside the box

![Inside the box](https://raw.githubusercontent.com/pwittchen/SkretchNoise/master/images/inside-box.jpg)

### Outside the box

![Outside the box](https://raw.githubusercontent.com/pwittchen/SkretchNoise/master/images/outside-box.jpg)

Contributors
------------

Asia Plewnia, Mariusz Peryt, Piotr Wittchen

Links
-----
- [Medialab Katowice](http://medialabkatowice.eu/en/)
- [Event website on Facebook](https://www.facebook.com/events/517379498415304/)
- [Short video from event on Vimeo](https://vimeo.com/140678636)
