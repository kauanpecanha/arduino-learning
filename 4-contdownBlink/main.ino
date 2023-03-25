
int led0 = 0;
int led1 = 1;
int led2 = 2;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 8;
int led7 = 9;
int led8 = 10;

int led9 = 13;

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led9, LOW);
  digitalWrite(led0, HIGH);
  delay(1000);
  digitalWrite(led0, LOW);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(1000);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(1000);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(1000);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(1000);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(1000);

  digitalWrite(led8, LOW);

  digitalWrite(led9, HIGH);
  delay(100);
  digitalWrite(led9, LOW);
  delay(100);
  digitalWrite(led9, HIGH);
  delay(100);
  digitalWrite(led9, LOW);
  delay(100);
  digitalWrite(led9, HIGH);
  delay(100);
  digitalWrite(led9, LOW);
  delay(100);
  digitalWrite(led9, HIGH);
  delay(100);
  digitalWrite(led9, LOW);
  delay(100);
  digitalWrite(led9, HIGH);
  delay(100);
  digitalWrite(led9, LOW);
  delay(100);
}