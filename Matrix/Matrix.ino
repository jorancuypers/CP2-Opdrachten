#include "ShiftRegister74HC595.h"
// create a global shift register object
// parameters: (number of shift registers, data pin, clock pin, latch pin)
ShiftRegister74HC595 sr (1, 0, 1, 2);


void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  sr.set(1, HIGH);

}
