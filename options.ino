// 21BIT0516
// CHIRAG VATS
int soilMoisturePin = A0;
int ledPin = 13;
int moistureValue = 0;
unsigned long lastMoistureRead = 0;  // Track last moisture reading time

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    int option = Serial.parseInt();
    executeOption(option);
  }

  // Read moisture only if a certain interval has passed
  unsigned long currentMillis = millis();
  if (currentMillis - lastMoistureRead >= 500) {  // Read every 500 milliseconds
    moistureValue = analogRead(soilMoisturePin);
    lastMoistureRead = currentMillis;
  }
}
void executeOption(int option) {
  switch (option) {
    case 1:
      Serial.println("Soil Moisture: " + String(moistureValue));
      break;
    case 2:
      digitalWrite(ledPin, HIGH);
      break;
    case 3:
      digitalWrite(ledPin, LOW);
      break;
    case 4:
      int ledStatus = digitalRead(ledPin);
      if (ledStatus == HIGH) {
        Serial.println("LED is turned ON");
      } else {
        Serial.println("LED is turned OFF");
      }
      break;
    default:
  break;}
}