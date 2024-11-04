#define IR_SENSOR_PIN 2  // Pin connected to the sensor's OUT

void setup() {
  Serial.begin(9600);        // Start serial communication at 9600 baud
  pinMode(IR_SENSOR_PIN, INPUT);  // Set the sensor pin as input
}

void loop() {
  int sensorState = digitalRead(IR_SENSOR_PIN);  // Read the sensor output

  if (sensorState == LOW) {
    Serial.println("Object Detected");  // LOW indicates object detection
  } else {
    Serial.println("No Object");        // HIGH indicates no object detected
  }

  delay(500);  // Wait for half a second before checking again
}
