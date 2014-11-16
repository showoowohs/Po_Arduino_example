
//digital pin 2
//#define Po_LED 2
//digital pin 3
#define Po_LED 3

void setup() {
   pinMode(Po_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
   digitalWrite(Po_LED, HIGH);   // 讓LED不亮
   delay(2000);              // wait for a second
   digitalWrite(Po_LED, LOW);    // 讓LED亮
   delay(1000);              // wait for a second
}
