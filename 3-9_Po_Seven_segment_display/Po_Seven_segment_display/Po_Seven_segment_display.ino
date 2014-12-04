

void setup() { 
 //Initialize serial and wait for port to open:
  Serial.begin(9600);   

  pinMode(2, OUTPUT); 

  pinMode(3, OUTPUT);

  pinMode(4, OUTPUT);

  pinMode(5, OUTPUT);

  pinMode(6, OUTPUT);

  pinMode(7, OUTPUT);

  pinMode(8, OUTPUT);

  pinMode(9, OUTPUT);


} 

void loop() { 
 digitalWrite(2, 1);

  digitalWrite(3, 1);

  
  delay(1000);
  //Serial.print("ADpin_buffer = ");     
  Serial.println("...");   
  
  digitalWrite(2, 0);

  digitalWrite(3, 0);
  delay(1000);
  //delay(500);
}


