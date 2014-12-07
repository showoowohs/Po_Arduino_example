#define LM35 A5
int Po_val = 0;

void setup() {
  //init
  Serial.begin(9600);
}

void loop(){
  Po_val = analogRead(LM35);
  Serial.print("Po_val = ");
  Serial.println(Po_val);
}


