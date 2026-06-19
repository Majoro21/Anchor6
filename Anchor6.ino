// TCRT5000 Infrared Reflectance Sensor - Analog Reading
const int irSensorPin = A0;  // Connect the sensor's AO pin to Arduino A0
void setup() {
  pinMode(5, INPUT);    // Pin 5 reads data
  pinMode(6, OUTPUT);   // Pin 6 sends data/signal
  pinMode(7, OUTPUT);   // Pin 7 sends data/signal
}

void loop(){
  // Read state of pin 5
  int pinValue = digitalRead(5); 

  if (pinValue == HIGH) {
    // Communicate to pins 6 and 7 to turn on
    digitalWrite(6, HIGH); 
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  }
}