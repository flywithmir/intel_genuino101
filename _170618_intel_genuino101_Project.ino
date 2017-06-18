int distancePin=4;
int redLed=9;
int greenLed=10;
int blueLed=11;

void setup(){
  Serial.begin(57600);
  Serial.println("Start");
  
  pinMode(distancePin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);  
}

void loop(){
  if(digitalRead(distancePin) == LOW){
    digitalWrite(blueLed, HIGH);
    digitalWrite(greenLed,LOW);
    digitalWrite(redLed,LOW);
    delay(1000);
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed,HIGH);
    digitalWrite(redLed,LOW);
    delay(1000);
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed,LOW);
    digitalWrite(redLed,HIGH);
    delay(1000);
    digitalWrite(blueLed, HIGH);
    digitalWrite(greenLed,HIGH);
    digitalWrite(redLed,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed,LOW);
    digitalWrite(redLed,LOW);
    delay(100);
  }
  Serial.print("distance sensor status: ");
  Serial.println(digitalRead(distancePin), BIN);
}

