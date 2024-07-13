const int ledPin = D1;     // LED connected to digital pin D5
const int buttonPin = D2;  // Button connected to digital pin D6

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Initialize the button pin as an input with pull-up
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Read the state of the button
  int buttonState = digitalRead(buttonPin);
  
  // If the button is pressed
  if (buttonState == LOW) {
    // Turn the LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn the LED off
    digitalWrite(ledPin, LOW);
  }
}
