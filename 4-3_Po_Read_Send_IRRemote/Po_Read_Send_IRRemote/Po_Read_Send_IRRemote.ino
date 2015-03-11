#include "AIRremote.h"

IRsend irsend; // IRRemote限定使用數位腳位3

void setup()
{
  Serial.begin(9600);

}

void loop() {
 int d;
  if( (d = Serial.read()) != -1) { // 讀取序列埠
    unsigned long v = 0x0;
    switch(d){ // 根據讀取到的資料，換成代表六個按鍵的紅外線編碼
      case '1':
        v = 0xFF708F;
        //Power
      break;
      case '2':
        v = 0xFFF00F;
        //Mode
      break;
      case '3':
        v = 0xFF58A7;
        //擺動
      break;
      case '4':
        v = 0xFFE817;
        //UP
      break;
      case '5':
        v = 0xFF6897;
        //Down
      break;
      case '6':
        v = 0x77E11050;
      break;
    }
  if(v != 0x0){
      Serial.print("read ");
      Serial.print(d);
      Serial.print(", IR send ");
      Serial.println(v, HEX);
      irsend.sendNEC(v, 32); // 輸出紅外線訊號
    }
  }
}
