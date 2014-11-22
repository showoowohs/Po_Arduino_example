#define Pot A1// select analog in A1, can use A0~A5
#define LED 3

int Pot_buffer = 0;

void setup() { 
 //Initialize serial and wait for port to open:
  Serial.begin(9600);   
  pinMode(LED, OUTPUT);
} 

void loop() { 
  Pot_buffer = analogRead(Pot);//最大值是1023
  Serial.print("Pot_buffer = ");     
  Serial.println(Pot_buffer);   
  
  //透過map()轉換
  Pot_buffer =map(Pot_buffer, 0, 1023, 0, 255);//將Pot的數值轉換城0~255, Pot的值本來是0~1023, 現在只會有0~255
  Serial.print("map(Pot_buffer) = ");     
  Serial.println(Pot_buffer); 
  
  //將0~255的值填入PWM
  analogWrite(LED, Pot_buffer);
  //Po_debug();
  delay(500);
}

void Po_debug(){
   for(int i =0; i <= 255; i++){
    Serial.println(i);
    analogWrite(LED, i);   
    delay(200);
  }
}
