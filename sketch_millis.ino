int ledPin = 13;
int a,b;
int flag = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
a = millis();
}

void loop() {
  // put your main code here, to run repeatedly:
b = millis();
if (b - a >= 200 && flag == 0)
{
  digitalWrite(ledPin, HIGH);
  a = b;
  flag = 1;
}
b = millis();
if (b - a >= 1000 && flag == 1)
{
  digitalWrite(ledPin, LOW);
  a = b;
  flag = 0;
}
}