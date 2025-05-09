const int buttonPin = 18; 
const int ledPin = 23;    

void setup() {
  
  Serial.begin(115200);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int state = digitalRead(buttonPin);
  Serial.println(state);
  digitalWrite(ledPin, state);  
  delay(200);
}
