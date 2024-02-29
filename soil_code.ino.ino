#define soilWet 500
#define soilDry 750

void setup() {
  
  #define sensorPin A0
  Serial.begin(9600);

}

void loop() {
  int soil_moisture = analogRead(sensorPin);

  if(soil_moisture < soilWet){
    Serial.println("status: Soil is too wet");
  }

  else if (soil_moisture >= soilWet && soil_moisture < soilDry){
    Serial.println("status: Soil moisture is perfect");
  }

  else{
    Serial.println("Status: Soil is to dry - time to water!");
  }

  delay (3000);

  Serial.println(soil_moisture);

  delay(5000);

}
