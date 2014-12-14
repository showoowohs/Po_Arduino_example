#define Buzzer 3
#define Vibration_sensor 2


void setup() {
  //init
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);
  pinMode(Vibration_sensor, INPUT_PULLUP);
  attachInterrupt(0, start_voice, FALLING);
}

void loop(){
  Serial.println(" C");
  
}

void start_voice(){
  Serial.println("start_voice()");
  digitalWrite(Buzzer, HIGH);
  delay(2000);
  digitalWrite(Buzzer, LOW);
  delay(1000);
}





