
#define led 13
#define volume_pin A5

int threshold = 500; //Change This
int volume;

void setup() {                
  Serial.begin(9600); // For debugging
  pinMode(led, OUTPUT);     
}

void loop() {
  
  volume = analogRead(volume_pin); // Reads the value from the Analog PIN A0
  //volume = map(volume, 0, 1023, 0, 255);
  
  //Debug mode
  Serial.println(volume);
  delay(100);
  
  
  if(volume>=threshold){
    digitalWrite(led, HIGH); //Turn ON Led
  }  
  else{
    digitalWrite(led, LOW); // Turn OFF Led
  }

}
