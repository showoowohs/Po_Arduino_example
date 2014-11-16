#define Po_LED13 13
#define Button 2

void setup(){
  //Initialize serial and wait for port to open:
  Serial.begin(9600); 
  pinMode(Po_LED13, OUTPUT);//設定LED 13為output
  pinMode(Button, INPUT);//設定btn 2為input
}
void loop(){
  if(digitalRead(Button) == LOW){
  Serial.print("is Low!!\n");
  }
  
}
