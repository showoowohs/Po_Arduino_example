
//digital pin 2
#define Po_LED 2

void setup() {
   pinMode(Po_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
   digitalWrite(Po_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(1000);              // wait for a second
   digitalWrite(Po_LED, LOW);    // turn the LED off by making the voltage LOW
   delay(1000);              // wait for a second
}
