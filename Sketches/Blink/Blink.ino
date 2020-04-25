int pin =2;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin, OUTPUT);

  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
  Serial.print("hello");
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  
  Serial.print("world");
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}
