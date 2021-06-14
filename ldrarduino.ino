int ldrPin = A0;
int led = 7;
int recordvalue = 30;
void setup() //this runs only one time.
{
  Serial.begin(9600); //bits/sec //Serial communication between arduino and laptop.
  pinMode(led, OUTPUT);
}

void loop() //We can say this is the ain program/function.
{
  int data = analogRead(ldrPin);   //coz we're using analog sensor.
  Serial.println("");
  Serial.print("Light kati xa ta");
  Serial.print("value =");
  Serial.print(data);
  if(data < recordvalue)
  {
    digitalWrite(led, HIGH);  // coz I am using digital pin. 
  }
  else{
    digitalWrite(led,LOW);
  }
}
