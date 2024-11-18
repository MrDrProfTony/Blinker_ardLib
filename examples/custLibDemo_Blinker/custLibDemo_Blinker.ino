/*
 * Dr. Anthony Barsic
 * University of Vermont
 * Department of Electrical Engineering
 * CMPE 3815
 * 2024 November 7
 * This is the example for a custom library.
 * The library just blinks an LED a number of times.
 * The code is based on a tutorial from this book:
 * Simon Monk. 
 * "Programming Arduino: Getting Started with Sketches"
 */


// INIT & SETUP ===+=== ===+=== ===+=== ===+=== ===+=== ===+=== ===+=== ===+=== ===+=== ===+===
// Explicitly include Arduino.h
#include "Arduino.h"
// Include our new library!
#include "Blinker.h"

// variable definitions for objects
const int slowBlinkerDuration = 400; // ms
const int fastBlinkerDuration = 200; // ms

// create objects of the class Blinker
Blinker slowBlinky(LED_BUILTIN, slowBlinkerDuration);
Blinker fastBlinky(LED_BUILTIN, fastBlinkerDuration);

void setup() {}


// LOOP ===+=== ===+=== ===+=== ===+=== ===+=== ===+=== ===+=== ===+=== ===+=== ===+=== ===+===
void loop()
{
  // use our new library! some fast blinks
  fastBlinky.blinkNtimes(3);
  delay(500);
  // and then some slow blinks
  slowBlinky.blinkNtimes(3);
  delay(500);
  // and finally, some fast ones again
  fastBlinky.blinkNtimes(3);
  delay(2000);
}

// ===+=== ===+=== ===+=== ===+=== ===+=== END OF SKETCH ===+=== ===+=== ===+=== ===+=== ===+===
// ===+=== ===+=== ===+=== ===+=== ===+=== END OF SKETCH ===+=== ===+=== ===+=== ===+=== ===+===
// ===+=== ===+=== ===+=== ===+=== ===+=== END OF SKETCH ===+=== ===+=== ===+=== ===+=== ===+===