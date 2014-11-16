#define Po_LED13 13
#define Button 3

void setup(){
  //Initialize serial and wait for port to open:
  Serial.begin(9600); 
  pinMode(Po_LED13, OUTPUT);//設定LED 13為output
  pinMode(Button, INPUT_PULLUP);//設定btn 2為input
}
void loop(){
  if(digitalRead(Button) == LOW){//判斷btn狀態
    delay(20);
      if(digitalRead(Button) == LOW){//等待20s 後再判斷btn status
        Serial.print("is Low!!\n");
        //digitalWrite(Po_LED13, HIGH);//將LED設定HIGH
        digitalWrite(Po_LED13, !digitalRead(Po_LED13));//將讀取到的LED數值反向
        while(digitalRead(Button) == LOW);//只有在Button為LOW的時候迴圈, 不是LOW就跳開
      }
  }
}

