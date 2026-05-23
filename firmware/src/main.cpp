#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  
  // Initialize servo position reader
  setupServos();
  
  Serial.println("Animatronic Eyes - Servo Position Monitor");
  Serial.println("==========================================");
}

void loop() {
  // Read and print all servo positions
  printServoPositions();
  
  // Print every 500ms
  delay(500);
}
