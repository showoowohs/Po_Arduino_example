#define Pot A1// select analog in A1, can use A0~A5
#define Buzzer 3

int Pot_buffer = 0;

void setup() { 
 //Initialize serial and wait for port to open:
  Serial.begin(9600);   
  pinMode(Buzzer, OUTPUT);
} 

void loop() { 
  Pot_buffer = analogRead(Pot);//最大值是1023
  Serial.print("Pot_buffer = ");     
  Serial.println(Pot_buffer);   
  
  for(int i = 0; i < 100; i++){//1超小聲 10小聲 100剛好 1000尖銳
    digitalWrite(Buzzer, HIGH); 
    delayMicroseconds(Pot_buffer);
    digitalWrite(Buzzer, LOW); 
    delayMicroseconds(100);
  }
  
  //Po_debug();

  delay(1000);
}

void Po_debug(){
   for(int i =0; i <= 255; i++){
    Serial.println(i);

    delay(200);
  }
}
