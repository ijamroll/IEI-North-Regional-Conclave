const int ledpin1=13;
const int ledoin2=12;
const int ldrpin=A0;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(12,OUTPUT);
  //pinMode(2,OUTPUT);
  
}
 void loop()
 {
   int ldrstatus=analogRead(A0);
   if(ldrstatus<=200) 
   {
     digitalWrite(13,HIGH);
     digitalWrite(12,LOW);
     //digitalWrite(2,LOW);
     Serial.println(ldrstatus);
   }
   else
   {
     
     digitalWrite(12,HIGH);
     digitalWrite(13,LOW);
     //digitalWrite(2,HIGH);
     Serial.println(ldrstatus);
   }
 }
