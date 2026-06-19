int butadLed=5;
int butloLed=6;
const int waterLevel = A0;
int delayTime=700;
int redLed=2;
int yelLED=3;
int greLED=4;

void setup() {
  // put your setup code here, to run once:
  pinMode(butadLed,INPUT);
  pinMode(butloLed,INPUT);
  pinMode(redLed,OUTPUT);
  pinMode(greLED,OUTPUT);
  pinMode(yelLED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int currentLevel = analogRead(waterLevel);
  Serial.println(currentLevel);
   

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
  if(currentLevel < 294 && currentLevel > 159){
    digitalWrite(redLed,HIGH);
    digitalWrite(yelLED,LOW);
    digitalWrite(greLED, LOW);
    Serial.println(currentLevel);

  }
  if(currentLevel < 294){
    digitalWrite(redLed,LOW);
    digitalWrite(yelLED,LOW);
    digitalWrite(greLED, LOW);
    Serial.println(currentLevel);

  }
  
}
