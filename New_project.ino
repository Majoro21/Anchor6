/* int redLed=2;
int yelLED=3;
int greLED=4;
int delayTime=500;
void setup(){
pinMode(redLed,OUTPUT);
pinMode(greLED,OUTPUT);
pinMode(yelLED,OUTPUT);
}

void loop(){
digitalWrite(redLed,HIGH);
digitalWrite(yelLED,HIGH);
digitalWrite(greLED,HIGH);
delay(500);
digitalWrite(redLed,LOW);
digitalWrite(yelLED,LOW);
digitalWrite(greLED,LOW);
delay(500);
} */

int butadLed=5;
int butloLed=6;
const int waterLevel = A0;
int delayTime=700;
int redLed=2;
int yelLED=3;
int greLED=4;

void setup();{
  pinMode(butadLed,INPUT);
  pinMode(butloLed,INPUT);
  pinMode(redLed,OUTPUT);
  pinMode(greLED,OUTPUT);
  pinMode(yelLED,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int currentLevel = analogRead(waterLevel);
  Serial.println(currentLevel);

  /* if(digitalRead(butadLed) == HIGH){
    Serial.println("Water added");
  }
  
  if(digitalRead(butloLed) == HIGH)
  {
    Serial.println("Water is lost");
  } */

  if(currentLevel < 600 && currentLevel > 365){
    digitalWrite(redLed,LOW);
    digitalWrite(yelLED,LOW);
    digitalWrite(greLED,HIGH);
    Serial.println(currentLevel);

  }
  if(currentLevel < 364 && currentLevel > 295){
    digitalWrite(redLed,LOW);
    digitalWrite(yelLED,HIGH);
    digitalWrite(greLED, LOW);
    Serial.println(currentLevel);

  }
  
  if(currentLevel > 294){
    digitalWrite(redLed,HIGH);
    digitalWrite(yelLED,LOW);
    digitalWrite(greLED, LOW);
    Serial.println(currentLevel);



  }
  
  // delay(700);
}

// ii int pupLed=7;
