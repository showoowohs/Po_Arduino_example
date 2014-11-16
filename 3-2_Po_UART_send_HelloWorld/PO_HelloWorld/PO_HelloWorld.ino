void setup() {
	Serial.begin(9600); 
}
void loop() { 
	//Serial.print("Hello World!!"); 
	//Serial.println("Hello World!!"); 
        Serial.print("Hello World!!\n"); 
        //Serial.write(0x31); //16進制0x31印出是字元1 , 也可寫成10進制49
        Serial.write(0+0x31);
        //Serial.write(49);

        //Serial.write(65); //十進制65印出是A , 也可寫成16進制0x41
        Serial.print("\n"); 
	delay(1000);
}
