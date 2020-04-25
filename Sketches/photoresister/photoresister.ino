int ldrPin = A0;
int ldrValue = 0;

void setup() {
 Serial.begin(9600);
}

void loop() {
 ldrValue = analogRead(ldrPin);
 Serial.print(ldrValue);
 Serial.println();
 delay(2500);
}
