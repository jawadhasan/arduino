const int led = 10;

void setup() {
  // put your setup code here, to run once:
   pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
   for (int i = 0; i < 178; ++i) {

      analogWrite(led, i);
      delay(1000);
    
    }
}
