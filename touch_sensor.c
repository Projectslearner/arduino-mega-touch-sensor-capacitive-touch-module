/*
    Project name : Touch Sensor Capacitive Touch Module
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-touch-sensor-capacitive-touch-module
*/

const int touchSensorPin = 2; // Digital pin connected to touch sensor module

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(touchSensorPin, INPUT); // Set touch sensor pin as input
}

void loop() {
  int sensorValue = digitalRead(touchSensorPin); // Read touch sensor state

  // Check if touch is detected
  if (sensorValue == HIGH) {
    Serial.println("Touch detected!");
  } else {
    Serial.println("No touch detected.");
  }

  delay(500); // Add a small delay before the next reading
}
