// LED Blinking library -- Implementation File

/*
 * Dr. Anthony Barsic
 * University of Vermont
 * Department of Electrical Engineering
 * CMPE 3815
 * 2024 November 7
 * This is the Implementation File for a custom library.
 * The library just blinks an LED a number of times.
 * The code is based on a tutorial from this book:
 * Simon Monk. 
 * "Programming Arduino: Getting Started with Sketches"
 */
 
#include "Blinker.h"

Blinker::Blinker(int pin, int delayDuration)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  _delayDur = delayDuration / 2;
}

void Blinker::blinkNtimes(int times)
{
  for (int k = 0; k < times; k++)
  {
    digitalWrite(_pin, HIGH);
    delay(_delayDur);
    digitalWrite(_pin, LOW);
    delay(_delayDur);
  }
}

// end of Implementation File
