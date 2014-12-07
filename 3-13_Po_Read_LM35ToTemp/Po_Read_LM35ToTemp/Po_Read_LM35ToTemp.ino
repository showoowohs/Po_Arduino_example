#define LM35 A5
int Po_val = 0;

void setup() {
  //init
  Serial.begin(9600);
}

void loop(){
  float Po_Temp_F = 0;
  float Po_Temp_C = 0;
  Po_val = analogRead(LM35);
  Serial.print("Po_val = ");
  Serial.println(Po_val);
  
  //將讀取到的value轉換成溫度
  Po_Temp_F = LM35ToTemp(Po_val);
  Serial.print("Po_Temp_F = ");
  Serial.print(Po_Temp_F);
  Serial.println(" F");
  
  //在轉成度C
  Po_Temp_C = FToC(Po_Temp_F);
  Serial.print("Po_Temp_C = ");
  Serial.print(Po_Temp_C);
  Serial.println(" C");
  delay(1000);
}

//轉成 F華氏
float LM35ToTemp (int val){
  float temp = (125*val)>>8;
  //Serial.println(temp);
  return temp;
}

float FToC (float F){
  float Po_C = (F - 32)/1.8000;
  return Po_C;
}




