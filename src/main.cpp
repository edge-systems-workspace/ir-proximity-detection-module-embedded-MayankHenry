#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Mayank
 * @date 2026-01-28
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

const int irPin = 2;
int sensorState = 0;

void setup() {

    Serial.begin(9600);
    pinMode(irPin, INPUT);
    Serial.println("IR Obstacle Detection System Initialized");

}

void loop() {

    // TODO 6:
    // Read digital value from IR sensor

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"

    // TODO 8:
    // Add small delay (200–500ms)
}
