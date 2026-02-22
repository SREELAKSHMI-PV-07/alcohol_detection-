// MQ-3 Alcohol Detector with Calibration + 3 LEDs + Buzzer
// Board: Arduino Nano

// Pin mapping
const int mqPin = A0;       // MQ-3 analog output connected to A0
const int greenPin = 2;     // Green LED
const int yellowPin = 3;    // Yellow LED
const int redPin = 4;       // Red LED
const int buzzerPin = 5;    // Buzzer

// Thresholds (adjust after calibration)
int safeLimit = 300;     // Green zone
int warningLimit = 1000;  // Yellow zone
// Above warningLimit = Red zone (danger)

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);   // For calibration & debugging
  Serial.println("MQ-3 Alcohol Detector Started...");
}

void loop() {
  // Read sensor value
  int sensorValue = analogRead(mqPin);

  // Print value for calibration
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  // Decision making
  if (sensorValue < safeLimit) {
    // Safe zone
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  else if (sensorValue >= safeLimit && sensorValue < warningLimit) {
    // Warning zone
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  else {
    // Danger zone
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
    digitalWrite(buzzerPin, HIGH); 
    delay (500);
    digitalWrite(buzzerPin,LOW); 
    // Alarm ON
  }

  delay(500); // small delay for stability
}
