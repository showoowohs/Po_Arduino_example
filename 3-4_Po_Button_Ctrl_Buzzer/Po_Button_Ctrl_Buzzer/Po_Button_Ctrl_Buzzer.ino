#define Po_LED13 13
#define Button 3//板子上的第3pin
#define Buzzer 2//板子上的第2pin

boolean click_btn = false;

void setup(){
  //Initialize serial and wait for port to open:
  Serial.begin(9600); 
  pinMode(Po_LED13, OUTPUT);//設定LED 13為output
  pinMode(Button, INPUT_PULLUP);//設定btn 2為input
  pinMode(Buzzer, OUTPUT);
  digitalWrite(Buzzer, LOW);//init Buzzer LOW
}
void loop(){
  scan_key();
  if(click_btn == 1){//==true
    click_btn = false;
    //digitalWrite(Po_LED13, HIGH);//將LED設定HIGH
    digitalWrite(Po_LED13, !digitalRead(Po_LED13));//將讀取到的LED數值反向
    Serial.print("clicl_btn = true!!\n");

  }

}

void scan_key(){
  if(digitalRead(Button) == LOW){//判斷btn狀態
    delay(20);
      if(digitalRead(Button) == LOW){//等待20s 後再判斷btn status
        Serial.print("is Low , Button click!!\n");
        click_btn = 1;//true
        //if btn is click start buzzer 
        digitalWrite(Buzzer, HIGH);
        delay(20);
        digitalWrite(Buzzer, LOW);
        //buzzer End
        while(digitalRead(Button) == LOW);//只有在Button為LOW的時候迴圈, 不是LOW就跳開
      }
  }else{
    //Serial.print("is HIGH, not click!!\n");
  }
}

