int pirsensor = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  pirsensor = digitalRead(2);
  if (pirsensor == HIGH)
  { 
    digitalWrite(13,HIGH);
    digitalWrite(4,HIGH);
  }
  else
  { 
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  }
  delay(10);
}