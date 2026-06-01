#include <LiquidCrystal.h> 
// Initialize the library with the numbers of the interface pins 
// RS, E, D4, D5, D6, D7 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
void setup() { 
  lcd.begin(16, 2);                // Set up the LCD's number of columns and rows 
  lcd.print("Hello, World!");      // Print message on the LCD 
} 
void loop() { 
  // No repeated code needed 
}