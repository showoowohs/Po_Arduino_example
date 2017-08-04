#include <DHT.h>
#include <DHT_U.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
 
#define DHTPIN 2    
#define DHTTYPE DHT11   
#define TEMP_ARRAYSIZE 13
#define Hum_ARRAYSIZE 10
String T_results[TEMP_ARRAYSIZE] = { "T", "e", "m", "p", "e", "r", "a", "t", "u", "r", "e", ":", " " };
String H_results[Hum_ARRAYSIZE] = { "H", "u", "m", "i", "d", "i", "t", "y", ":", " " };

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor

void setup()
{
  Serial.begin(9600);
  lcd.init();                      // initialize the lcd 
  Serial.println("lcd.init()");
  
  // Print a message to the LCD.
  lcd.backlight();
  Serial.println("lcd.backlight()");  
  Serial.println("DHT11 init!");
  dht.begin();
}

int read_dht11_h(){
  
  int h = dht.readHumidity();
  
  if (isnan(h)) {
    Serial.println("Failed to read from DHT sensor!");
    return 0;
    }
  //Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("%\t");
  return h; 
}

int read_dht11_t(){
  
  int t = dht.readTemperature();
  
  if (isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return 0;
    }
  //Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println("*C\t");
  return t;
}

void convert_and_show_TH(int TH){
  String convert;
  int array_num = 3;
  char array[array_num];

  convert += TH;
  convert.toCharArray(array, array_num);
  for(int i = 0 ; i < array_num-- ; i++){
    lcd.print(array[i]);
    //Serial.print(array[i]);
    //Serial.print("\t");
  }
}

void loop()
{
  
  //清除LCD
  lcd.clear();
  //指定print起始位置
  lcd.setCursor(0, 0);

  // show 1 line
  for(int i = 0 ; i < Hum_ARRAYSIZE ; i++){
    Serial.print(H_results[i]);
    lcd.print(H_results[i]);
  }
  int h = read_dht11_h();
  
  convert_and_show_TH(h);
  lcd.print("%");

  // show 2 line
  lcd.setCursor(0, 1);
  for(int i = 0 ; i < TEMP_ARRAYSIZE ; i++){
    Serial.print(T_results[i]);
    lcd.print(T_results[i]);
  }
  int t = read_dht11_t();
  convert_and_show_TH(t);
  //lcd.print("*");
  lcd.print("C");

  delay(10000);
  
}


