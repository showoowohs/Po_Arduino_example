#define Pot A1// select analog in A1, can use A0~A5

int Pot_buffer = 0;

void setup() { 
 //Initialize serial and wait for port to open:
  Serial.begin(9600);   
} 

void loop() { 
  Pot_buffer = analogRead(Pot);
  Serial.print("Pot_buffer = ");     
  Serial.println(Pot_buffer);   
  delay(500);
}
