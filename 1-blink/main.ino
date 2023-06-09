#define LED_BUILTIN1 8
#define LED_BUILTIN2 9

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN1, OUTPUT);
  pinMode(LED_BUILTIN2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN1, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN2, LOW);
  delay(400);                      // wait for a second
  digitalWrite(LED_BUILTIN1, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN2, HIGH);
  delay(400);                      // wait for a second
}
