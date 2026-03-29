// Smart Eyewear System for Drowsiness and Alcohol Detection
// Threshold values are determined based on experimental calibration

// ---------------- PIN DEFINITIONS ----------------
const int irSensorPin = A0;     
const int mq7Pin = A1;          
const int buzzerPin = 8;        

// ---------------- THRESHOLDS ----------------
const int irThreshold = 300;        
const int alcoholThreshold = 400;  

// ---------------- VARIABLES ----------------
unsigned long eyeCloseStartTime = 0;
bool eyeClosed = false;
bool alertTriggered = false;

// ---------------- SETUP ----------------
void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

// ---------------- MAIN LOOP ----------------
void loop() {

  int irValue = readIRSensor();
  int alcoholValue = readMQ7Sensor();

  checkDrowsiness(irValue);
  checkAlcohol(alcoholValue);

  displayData(irValue, alcoholValue);

  delay(200);
}

// ---------------- SENSOR FUNCTIONS ----------------

int readIRSensor() {
  return analogRead(irSensorPin);
}

int readMQ7Sensor() {
  return analogRead(mq7Pin);
}

// ---------------- LOGIC FUNCTIONS ----------------

// Drowsiness detection
void checkDrowsiness(int irValue) {

  if (irValue < irThreshold) {
    if (!eyeClosed) {
      eyeClosed = true;
      eyeCloseStartTime = millis();
    }
  } else {
    eyeClosed = false;
    alertTriggered = false;  // Reset alert when eye opens
  }

  if (eyeClosed && (millis() - eyeCloseStartTime > 3000)) {
    if (!alertTriggered) {
      triggerAlert("DROWSINESS DETECTED");
      alertTriggered = true;
    }
  }
}

// Alcohol detection
void checkAlcohol(int alcoholValue) {

  if (alcoholValue > alcoholThreshold) {
    triggerAlert("ALCOHOL DETECTED");
    delay(2000);  // Prevent continuous triggering
  }
}

// ---------------- OUTPUT FUNCTIONS ----------------

// Alert system
void triggerAlert(String message) {

  Serial.println(message);

  digitalWrite(buzzerPin, HIGH);
  delay(1000);
  digitalWrite(buzzerPin, LOW);
}

// Serial Monitor output
void displayData(int irValue, int alcoholValue) {

  Serial.print("IR Value: ");
  Serial.print(irValue);
  Serial.print(" | Alcohol Value: ");
  Serial.println(alcoholValue);
}
