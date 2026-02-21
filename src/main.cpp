/**
 * @file main.cpp
 * @brief Simple IR proximity detection example for Arduino/PlatformIO.
 * @author Anshuman Rai
 * @date 2026-02-21
 *
 * This sketch reads a digital IR proximity sensor connected to pin 2
 * and prints "Obstacle Detected" when the sensor detects an object,
 * otherwise "No Obstacle".
 */

#include <Arduino.h>

/// Digital pin where the IR proximity sensor is connected
#define irPin 2

/**
 * @brief Arduino setup function.
 *
 * Configures the IR pin as input and initializes the serial port at 9600 baud
 * so status messages can be sent to the host.
 */
void setup()
{
    Serial.begin(9600);
    pinMode(irPin, INPUT);
}

/**
 * @brief Main loop: read the IR sensor and print status every 500 ms.
 */
void loop()
{
    int irvalue = digitalRead(irPin);
    if (irvalue == HIGH)
    {
        Serial.println("IR Sensor: No Obstacle");
    }
    else
    {
        Serial.println("IR Sensor: Obstacle Detected");
    }
    delay(500);

}