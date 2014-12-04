#define ADpin A2// select analog in A2, can use A0~A5
#define LED 13


void setup() { 
 //Initialize serial and wait for port to open:
  Serial.begin(9600);   
  pinMode(LED, OUTPUT);
} 

void loop() { 
  int ADpin_buffer =0;
  ADpin_buffer = analogRead(ADpin);//0~1023
  Serial.print("ADpin_buffer = ");     
  Serial.println(ADpin_buffer);   
  
  Po_check_CdS(ADpin_buffer);

  delay(500);
}

void Po_check_CdS(int CdS_val){
  int val = CdS_val;
  if(val > 800){
    digitalWrite(LED, LOW);
    Serial.println("CdS_val > 800"); 
  }else{
    
    if(val < 700){
      digitalWrite(LED, LOW);

      delay(800);
      digitalWrite(LED, HIGH);
      delay(800);
      digitalWrite(LED, LOW);
      delay(800);
      digitalWrite(LED, HIGH);
      Serial.println("CdS_val < 700"); 
    }else{
      digitalWrite(LED, HIGH);
      Serial.println("CdS_val < 800"); 
    }
  }
}
