void setup()
{
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(4, INPUT); 
    pinMode(5, INPUT);
}
void loop()
{
    if (digitalRead(7)==1)
 { digitalWrite(2, 1);
 }
  else digitalWrite(2, 0);
if (digitalRead(6)==1)
 { digitalWrite(3, 1);
 }
  else digitalWrite(3, 0);
}