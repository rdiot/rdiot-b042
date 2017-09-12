/* L9110S 2-Channel Dual Motor Driver (L9110S) [B042] : http://rdiot.tistory.com/292 [RDIoT Demo]*/

void setup() {
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(A0,HIGH);
  digitalWrite(A1,LOW);
  delay(1000);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  delay(1000);
  digitalWrite(A0,LOW);
  digitalWrite(A1,LOW);
  delay(2000);
}
