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
const int buzzerPin = 8;

int sensorState = 0;

void setup() {

    Serial.begin(9600);
    pinMode(irPin, INPUT);
    pinMode(buzzerPin, OUTPUT);
    Serial.println("IR + Buzzer System Initialized");
}

void loop() {

    sensorState = digitalRead(irPin);

    if (sensorState == LOW) {
        Serial.println("Obstacle Detected!");
        digitalWrite(buzzerPin, HIGH);

    } else {
        Serial.println("No Obstacle");
        digitalWrite(buzzerPin, LOW);
    }

    delay(200);
}
