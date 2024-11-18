// LED Blinking library -- Header File

/*
 * Dr. Anthony Barsic
 * University of Vermont
 * Department of Electrical Engineering
 * CMPE 3815
 * 2024 November 7
 * This is the header for a custom library.
 * The library just blinks an LED a number of times.
 * The code is based on a tutorial from this book:
 * Simon Monk. 
 * "Programming Arduino: Getting Started with Sketches"
 */
 
#include "Arduino.h"

class Blinker
{
  public:
    Blinker(int pin, int delayDuration);
    void blinkNtimes(int times);
  private:
    int _pin;
    int _delayDur;
};

// end of header file
