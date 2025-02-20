
 const int redPin = 9;
 const int greenPin = 10; 
 const int bluePin = 11;

 const int buttonRed = 2;
 const int buttonGreen = 3;
 const int buttonBlue = 4;

 int lastRed = 0;
 int lastGreen = 0;
 int lastBlue = 0;
 

void setColor(int red, int green, int blue){
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(buttonRed, INPUT_PULLUP);
  pinMode(buttonGreen, INPUT_PULLUP);
  pinMode(buttonBlue, INPUT_PULLUP);

}

void loop() {
  int redPressed = digitalRead(buttonRed);
  int greenPressed = digitalRead(buttonGreen);
  int bluePressed = digitalRead(buttonBlue);

if (digitalRead(2)==LOW) {
  analogWrite(9, 255);
  analogWrite(10, 0);
  analogWrite(11, 0);
}
if (digitalRead(3)==LOW) {
  analogWrite(9, 0);
  analogWrite(10, 255);
  analogWrite(11, 0);
}
if (digitalRead(4)==LOW) {
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 255);
}
}





