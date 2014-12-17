#define Buzzer 3
#define flame_sensor A5

void setup() {
  //init
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);
  
  
}

void loop(){
  int flame_sensor_buf = 0;
  flame_sensor_buf = analogRead(flame_sensor);
  Serial.print("flame_sensor_buf = ");
  Serial.println(flame_sensor_buf);
  if (flame_sensor_buf > 0){
    start_buzzer();
  }else{
    stop_buzzer();
  }
  delay(100);  
}

void start_buzzer(){
  Serial.println("start_buzzer()");
  digitalWrite(Buzzer, HIGH);
}

void stop_buzzer(){
  Serial.println("stop_buzzer()");
  digitalWrite(Buzzer, LOW);
}





