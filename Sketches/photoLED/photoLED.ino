
//set pin numbers
const int ledPin = 13;
const int ldrPin = A0;
int ldrValue = 0;

const int buzzer = 12;//the pin of the active buzzer

const int ballSwitchPin = 2;


void setup() {
 Serial.begin(9600);
 pinMode(ledPin, OUTPUT);
 pinMode(ldrPin, INPUT);
 pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
 pinMode(ballSwitchPin,INPUT);
   digitalWrite(ballSwitchPin, HIGH);


}

void loop() {
 ldrValue = analogRead(ldrPin);
 Serial.print("LDR value >> "); 
 Serial.println(ldrValue); 

  int digitalVal = digitalRead(ballSwitchPin);
 Serial.print("BallSwitch value >> "); 
 Serial.println(digitalVal);
  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW);//turn the led off
  }
  else
  {
    digitalWrite(ledPin,HIGH);//turn the led on 
  }

  
/*
if(ldrValue <= 300){  
  digitalWrite(ledPin, HIGH);
  Serial.println("LDR is DARK, LED is ON");  
  
  digitalWrite(buzzer,HIGH);
  delay(1);//wait for 1ms
  }
  else{
   digitalWrite(ledPin, LOW);
   Serial.println("LDR is Bright, LED is OFF");  

    digitalWrite(buzzer,LOW);
    delay(1);//wait for 1ms
  }
  */
    delay(100);//wait for 1ms
 Serial.println();
}
