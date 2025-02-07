void setup(){
  Serial.begin(9600);
}

void loop(){
  //Serial.println(analogRead(2));
  Serial.println(0.0048828125* analogRead(2));
  delay(500);
}