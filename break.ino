
int ledPin = 13;
volatile int x = 0;

void setup() {
  attachInterrupt(0, increment, HIGH);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, LOW);
  delay(3000);
  Serial.println(x, DEC);
}
void increment() {
  x++;
  digitalWrite(ledPin, HIGH);
}

