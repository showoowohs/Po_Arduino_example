//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
#define TEMP_ARRAYSIZE 13
String results[TEMP_ARRAYSIZE] = { "T", "e", "m", "p", "e", "r", "a", "t", "u", "r", "e", ":", " " };

void setup()
{
  Serial.begin(9600);
  lcd.init();                      // initialize the lcd 
  Serial.println("lcd.init()");
  
  // Print a message to the LCD.
  lcd.backlight();
  Serial.println("lcd.backlight()");
  lcd.print("Hello, world!");
}

void loop()
{
  //清除LCD
  lcd.clear();
  //指定print起始位置
  lcd.setCursor(0, 0);

  // show 1 line
  for(int i = 0 ; i < TEMP_ARRAYSIZE ; i++){
    lcd.print(results[i]);
  }

  // show 2 line
  lcd.setCursor(0, 1);
  lcd.print("I Love You!!");
  delay(1000);
  
  
  /*
  delay(1000);
  for(int i = 0 ; i < 16 ; i++){
    lcd.clear();
    lcd.setCursor(i, 1);
    lcd.print("I Love You!!");
    delay(300);
  }
  */
  
}


