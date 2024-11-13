
//declare pins used for the LEDs
int gled1 = 6;
int gled2 = 5;
int gled3 = 4;
int yled = 3;
int rled = 2;

void setup() {
  //setup the pins for LED output
  for (int i = rled; i <= gled1; i++) {
    //setup each LED pin for OUTPUT
    pinMode(i, OUTPUT);

    //test each LED to ensure it is working
    //should illuminate LED irregardless of battery charge
    digitalWrite(i, HIGH);
    delay(250);
    digitalWrite(i, LOW);
  }

  for (int i = rled; i <= gled1; i++) {
    digitalWrite(i, HIGH);
  }
}

void loop() {
}
