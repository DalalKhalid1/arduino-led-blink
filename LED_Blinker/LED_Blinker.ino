void setup() {
  pinMode(7, OUTPUT);  // First LED
  pinMode(3, OUTPUT);  // Second LED
}

void loop() {
  digitalWrite(7, HIGH);  // Turn on LED1
  digitalWrite(3, LOW);   // Turn off LED2
  delay(500);             // Wait 500 ms

  digitalWrite(7, LOW);   // Turn off LED1
  digitalWrite(3, HIGH);  // Turn on LED2
  delay(500);             // Wait 500 ms
}