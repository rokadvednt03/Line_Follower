
int val ;
void setup() {
  // put your setup code here, to run once:
pinMode(13,INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead(13);
Serial.println(val);
}
