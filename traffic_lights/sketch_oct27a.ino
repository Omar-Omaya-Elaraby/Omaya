int red=2;
int yellow=3;
int green=4;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {

  digitalWrite(green,HIGH);
  delay(3000);
  digitalWrite(green,LOW);

  digitalWrite(yellow,HIGH);
  delay(3000);
  digitalWrite(yellow,LOW);

  digitalWrite(red,HIGH);
  delay(3000);
  digitalWrite(red,LOW);

}
