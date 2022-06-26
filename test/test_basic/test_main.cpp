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
#include <unity.h>
#include <Arduino.h>
//#include "native/FunctionN.cpp"
//#include "native/HardwareSerialN.cpp"

void setUp(void)
{
}

void tearDown(void)
{
    // clean stuff up here
}

void test_blink(void)
{
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
    // the loop function runs over and over again forever
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(100);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
    delay(100);                      // wait for a second
    TEST_ASSERT_EQUAL_INT8(6, 6);
}

void test_pin_functions(void)
{
    int sensorValue = analogRead(A0);
    analogWrite(A7, sensorValue);
}

void test_serial(void)
{
    Serial.begin(9600, SERIAL_8N1);
    Serial.available();
    Serial.read();
    Serial.write('3');
}

void test_progmem(void)
{
    int8_t res = 6;
    TEST_ASSERT_EQUAL_INT8(6, res);
}

int main(int argc, char **argv)
{
    UNITY_BEGIN();
    RUN_TEST(test_blink);
    RUN_TEST(test_serial);
    RUN_TEST(test_pin_functions);
    RUN_TEST(test_progmem);
    UNITY_END();

    return 0;
}
