#include <Servo.h>
Servo myservo; // 建立Servo物件，控制伺服馬達

void setup() {
  myservo.attach(9); // pin9，伺服馬達的訊號線
  Serial.begin(9600);
}

//////////////////////////////////////////////////////////////////////////////
void loop(){
  
   Facade_Rotation();
   Opposite_Rotation();
//  Serial.print("");
  //myservo.write(90);
  
}

void Facade_Rotation(){
  for(int i = 0; i <= 180; i+=1){
    myservo.write(i); // 使用write，傳入角度，從0度轉到180度
    Serial.print("i=");
    Serial.println(i);
    delay(20);
  }
}

void Opposite_Rotation(){
  for(int i = 180; i >= 0; i-=1){
    myservo.write(i);// 使用write，傳入角度，從180度轉到0度
    Serial.print("i=");
    Serial.println(i);
    delay(20);
  }  
}
