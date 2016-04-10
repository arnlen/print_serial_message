/*
  Arnlen
  Print message if something is sent on the serial port
 */

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  while (!Serial) { }
}

// the loop routine runs over and over again forever:
void loop() {
  int message = Serial.read()-'0';

  if (message != -49) {
    Serial.println(message);
  }
  delay(1000);        // delay in between reads for stability
}
