#include "mbed.h"

void Led(DigitalOut &ledpin)
{
   for (int i = 0; i < 6; ++i)
   {                     //blink for 6 times
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(500ms);
   }
}