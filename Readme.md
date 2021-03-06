# Arduino Robot Programming

> First step at programming a robot. Next step Terminator.

## Background

Given a simple Arduino microcontroller board with 3 hardware extensions a button, 3-color LED display, 7-segment LED display and a light sensor.  My task was to configure the microcontroller board with the extensions and then program in c++ some functionality utilizing the board and the extensions.
This is One of the first projects that really got me thinking that programming is super cool.

## Functionality and Result

There where 2 functionalities configured 

1. The robot should display numbers 0-9 on the 7-segment LED display starting at 0,1,2... and change on a button press in a loop.  Additionally numbers 1-7 have an associated color displayed on the 3-color LED display.
  * 1 should display red
  * 2 should display green
  * 3 should display a combination of red and green
  * 4 should display blue
  * 5 should display a combination of red and blue
  * 6 should display a combination of blue and green
  * 7 should display a combination of red, green and blue

  The code used for this functionality is the file Arduino_Numbers.ino

  Click the video below to watch the results.

[![Arduino microcontroller board showing numbers on button press](http://img.youtube.com/vi/cLR114N15JA/0.jpg)](http://www.youtube.com/watch?v=cLR114N15JA "ARDUINO counter með ljósi")

2. The robot should utilise input given from the light sensor and interpret it by displaying on the 7-segment LED display the number 1 for bright light and 2 for dim light.
  
  The code used for this functionality is the file Arduino_Light_Sensor.ino
  
  Click the video below to watch the results.

[![Arduino light sensor](http://img.youtube.com/vi/CAKkQqQdU40/0.jpg)](http://www.youtube.com/watch?v=CAKkQqQdU40 "ARDUINO 1, 2 lightsensor")

## What I learned
  * My dreams of creating a young naked english/german speaking Arnold schwarzenegger robot are a long way off.

## Acknowledgments
  * Hat tip to the Arduino company for making real hardware programming accessible to the public.
