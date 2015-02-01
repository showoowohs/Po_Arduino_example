int JoyStick_X = A0; //x
int JoyStick_Y = A1; //y
int JoyStick_SW = A2; //SW 

void setup() 
{
  /*
  pinMode(JoyStick_X, INPUT); 
  pinMode(JoyStick_Y, INPUT); 
  pinMode(JoyStick_SW, INPUT); 
  */
  Serial.begin(9600); // 9600 bps 
} 



void loop()
{
  int tmp = 0;
  tmp = analogRead(JoyStick_X);
  Serial.print("X:"); 
  Serial.print(tmp, DEC); 
  tmp = analogRead(JoyStick_Y);
  Serial.print(" | Y:"); 
  Serial.print(tmp, DEC); 
  tmp = analogRead(JoyStick_SW);
  Serial.print(" | SW: "); 
  Serial.println(tmp, DEC); 
  delay(100); 
}


