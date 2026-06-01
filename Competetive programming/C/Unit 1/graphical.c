
#include <graphics.h> 
#include <conio.h> 
#include <stdio.h> 
int main() { 
    int gd = DETECT, gm; 
    int choice; 
 
    // Initialize graphics mode 
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Path for BGI folder (Turbo C++) 
 
    // Set background color 
    setbkcolor(WHITE); 
    cleardevice(); 
 
    // Show Menu 
    printf("Simple Graphical Editor in C\n"); 
    printf("1. Draw Line\n"); 
    printf("2. Draw Rectangle\n"); 
    printf("3. Draw Circle\n"); 
    printf("Enter your choice (1-3): "); 
    scanf("%d", &choice); 
 
    // Shape drawing based on user input 
    switch(choice) { 
        case 1: 
            setcolor(RED); 
            line(100, 100, 300, 100); // Draw line from (100,100) to (300,100) 
            outtextxy(120, 120, "Line Drawn"); 
            break; 
 
        case 2: 
            setcolor(GREEN); 
            rectangle(150, 150, 300, 250); // Rectangle from (150,150) to (300,250) 
            outtextxy(160, 260, "Rectangle Drawn"); 
            break; 
 
        case 3: 
            setcolor(BLUE); 
            circle(250, 200, 50); // Circle centered at (250,200) with radius 50 
            outtextxy(220, 260, "Circle Drawn"); 
            break; 
 
        default: 
            outtextxy(100, 100, "Invalid Choice"); 
            break; 
    } 
 
    getch();         // Wait for a key press 
    closegraph();    // Close the graphics window 
    return 0; 
} 