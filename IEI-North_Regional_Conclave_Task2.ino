void setup()
{
  pinMode(10, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int x=0;
  int PIR = digitalRead(2);
  Serial.println(PIR);
  if (PIR == 1)
  {  
    for (x=0; x<5; x++)
  {
  digitalWrite(10, HIGH);
  delayMicroseconds(379);
  digitalWrite(10, LOW);
  delayMicroseconds(379);
  }
  }
  else
  {
     digitalWrite(10, LOW);
  }
}
