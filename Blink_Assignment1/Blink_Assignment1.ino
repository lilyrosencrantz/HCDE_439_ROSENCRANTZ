void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  // The setup() function is called when a sketch starts. It initializes variables, pin modes (from the arduino.cc website)
  pinMode(13, OUTPUT);    // sets the digital 12 pin as output
  pinMode(10, OUTPUT);    // sets the digital 10 pin as output
  pinMode(8, OUTPUT);     // sets the digital 8 pin as output
}

void loop() { //loop function means the code will run over and over forever
  digitalWrite(13, HIGH);   // turn the red LED on (HIGH is the voltage level)
  digitalWrite(10, HIGH);   // turn the blue LED on at the same time as the red LED(HIGH is the voltage level)
  delay(400);                       // wait for 4/10 of a second (red and blue LEDs blink at the same time)
  digitalWrite(13, LOW);    // turn the red LED off by making the voltage LOW (blue stays on)
  delay(500);                       // wait for half a second (just blue LED is blinking)
  digitalWrite(10, LOW);    // turn the blue LED off by making the voltage LOW
  delay(400);                       // wait for 4/10 a second (no LED is on)
  digitalWrite(8, HIGH);   // turn the yellow LED on (HIGH is the voltage level)
  delay(500);                       // wait for half a second (just yellow LED is blinking)
  digitalWrite(8, LOW);    // turn the yellow LED off by making the voltage LOW
  delay(100);                       // wait for 1/10 of a second
}
