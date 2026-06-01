#include <avr/io.h> 
#include <util/delay.h> 
// Define LCD control pins 
#define RS PD0 
#define EN PD1 
#define LCD_PORT PORTC 
 
void LCD_Command(unsigned char cmd) { 
    LCD_PORT = cmd; 
    PORTD &= ~(1 << RS); // RS = 0 for command 
    PORTD |= (1 << EN); 
    _delay_ms(2); 
    PORTD &= ~(1 << EN); 
    _delay_ms(2); 
} 
 
void LCD_Char(unsigned char data) { 
    LCD_PORT = data; 
    PORTD |= (1 << RS);  // RS = 1 for data 
    PORTD |= (1 << EN); 
    _delay_ms(2); 
    PORTD &= ~(1 << EN); 
    _delay_ms(2); 
} 
 
void LCD_Init() { 
    DDRC = 0xFF;  // Set PORTC as output (data lines) 
    DDRD |= (1 << RS) | (1 << EN);  // Set RS and EN as output 
     
    _delay_ms(20); // LCD Power ON delay 
 
    LCD_Command(0x38); // 8-bit, 2 line, 5x7 dots 
    LCD_Command(0x0C); // Display ON, Cursor OFF 
    LCD_Command(0x06); // Auto increment cursor 
    LCD_Command(0x01); // Clear display 
    _delay_ms(2); 
} 
 
void LCD_String(char *str) { 
    while (*str) { 
        LCD_Char(*str++); 
    } 
} 
int main() { 
    LCD_Init();           // Initialize LCD 
    LCD_String("Hello, World!");  // Display message 
 
    while (1);  // Infinite loop 
}