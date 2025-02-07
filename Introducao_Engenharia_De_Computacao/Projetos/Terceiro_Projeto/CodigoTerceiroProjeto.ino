void setup() {
  pinMode(3, OUTPUT); // Red
  pinMode(6, OUTPUT); // Green
  pinMode(9, OUTPUT); // Blue
}

void loop() {
  analogWrite(3, random(0, 256));
  analogWrite(6, random(0, 256)); 
  analogWrite(9, random(0, 256)); 
  delay(500);
}
