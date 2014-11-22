#define Pot A1// select analog in A1, can use A0~A5

int Pot_buffer = 0;
int old_buf = -1;

void setup() { 
 //Initialize serial and wait for port to open:
  Serial.begin(9600);   
} 

void loop() { 
  Pot_buffer = analogRead(Pot);
  if(Pot_buffer != old_buf){//new buf 不等於 old buf的話才顯示
    old_buf = Pot_buffer;
    Serial.print("Pot_buffer = ");     
    Serial.println(Pot_buffer);   
  }
  delay(500);
}
