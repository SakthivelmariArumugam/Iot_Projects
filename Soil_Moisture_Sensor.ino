#define SOIL_MOISTURE_PIN A0  // Analog pin connected to the sensor's AO

void setup() {
  Serial.begin(9600);          // Start serial communication at 9600 baud
}

void loop() {
  int sensorValue = analogRead(SOIL_MOISTURE_PIN);  // Read the analog value
  Serial.print("Soil Moisture Level: ");
  Serial.println(sensorValue);                     // Print the sensor value to Serial Monitor

  delay(1000);  // Delay 1 second between readings
}
