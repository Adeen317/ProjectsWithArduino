const int ledPin = 9;
const int ldrPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop(){
  int ldrStatus = analogRead(ldrPin);  //read the state of the LDR value

  if (ldrStatus >= 400) {
    digitalWrite(ledPin, HIGH);  //turn off the LED
    Serial.println(ldrStatus);
  }
  else {
    digitalWrite(ledPin, LOW);  //turn on the LED
    Serial.println(ldrStatus);
  }
}
