// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
}