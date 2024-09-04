int ledRed = 7;
int ledGreen = 11;
int btRed = 5;
int valbtRed;
void setup() {
  Serial.begin(9600);
  pinMode(btRed, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}
void loop() {
  valbtRed = digitalRead(btRed);
  digitalWrite(ledRed, valbtRed);
  Serial.println(valbtRed);
  delay(100);
}
