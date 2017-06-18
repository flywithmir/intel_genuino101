int distancePin=4;
int redLed=9;
int greenLed=10;
int blueLed=11;

void setup(){
  Serial.begin(9600);
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
    delay(500);
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed,HIGH);
    digitalWrite(redLed,LOW);
    delay(500);
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed,LOW);
    digitalWrite(redLed,HIGH);
    delay(500);
    digitalWrite(blueLed, HIGH);
    digitalWrite(greenLed,HIGH);
    digitalWrite(redLed,HIGH);
    delay(500);
  }
  else{
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed,LOW);
    digitalWrite(redLed,LOW);
  }
  Serial.print("distance sensor status: ");
  Serial.println(digitalRead(distancePin), BIN);
}

