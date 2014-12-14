#define Buzzer 3


void setup() {
  //init
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);
}

void loop(){
  Serial.println(" C");
  digitalWrite(Buzzer, HIGH);
  delay(2000);
  digitalWrite(Buzzer, LOW);
  delay(1000);
}






