#define LM35 A0
#define piezo 7


float lm_value;
float tempc;

void setup() {
  Serial.begin(9600);
  pinMode(piezo, OUTPUT);
  
}

void loop() {
  lm_value = analogRead(LM35);
  tempc = (lm_value * 500) / 1023;
  Serial.println(tempc);//Temperature in Celcius

  //Condition
  if (tempc > 60) {
    digitalWrite(piezo, HIGH);
    delay(1000);
    digitalWrite(piezo, LOW);
  }
  else {
    
    digitalWrite(piezo, LOW);
  }
  delay(100);
}
