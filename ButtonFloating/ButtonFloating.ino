
#define Button01 2

void setup() 
{
  Serial.begin(9600);
  
  pinMode(Button01, INPUT);
}

void loop() 
{
  Serial.println(digitalRead(Button01));
  delay(10);
}
