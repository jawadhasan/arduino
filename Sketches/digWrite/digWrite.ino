const int led = 10;

void setup() {
  // put your setup code here, to run once:
   pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
   digitalWrite(led, HIGH);   // turn the LED on
   delay(1000);                       // wait for a second

   digitalWrite(led, LOW);    // turn the LED off
   delay(1000);                       // wait for a second
}
