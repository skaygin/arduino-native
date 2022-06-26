/*
MIT License

Copyright (c) 2022 Serkan KAYGIN

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#ifndef UNIT_TEST
// Use this code to debug the library
#include <Arduino.h>

#define LOOP_COUNT 1

void setup()
{
  // put your setup code here, to run once:
  printf("setup()\r\n");
  Serial.begin(9600);
  Serial.write('h');
  Serial.println(F("hello"));
  delay(10);
}

void loop()
{
  // put your main code here, to run repeatedly:
  printf("loop()\r\n");
}

int main()
{
  setup();
  for (int8_t i = 0; i < LOOP_COUNT; i++) // for (;;)
  {
    loop();
  }
  return 0;
}
#endif
