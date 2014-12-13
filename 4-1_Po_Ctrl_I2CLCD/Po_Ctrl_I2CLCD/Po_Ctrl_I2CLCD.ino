//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

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
  lcd.print("Mimi!!");
  
  lcd.setCursor(0, 1);
  lcd.print("I Love You!!");
  delay(1000);
}


