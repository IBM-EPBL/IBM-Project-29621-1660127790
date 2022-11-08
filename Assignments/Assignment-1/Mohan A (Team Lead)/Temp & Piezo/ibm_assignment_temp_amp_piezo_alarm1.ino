#define LM35 A0
#define piezo 1
float lm_value;
float tempc;
void setup()
{
  Serial.begin(9600);
  pinMode(piezo, OUTPUT);
}

void loop()
{
  lm_value = analogRead(LM35);
  tempc = (lm_value * 500)/1023;
  Serial.println(tempc);
  
  if(tempc>60){
  digitalWrite(piezo, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
}
  else{
    digitalWrite(piezo,LOW);
  }
  delay(100);
}