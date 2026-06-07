#include <graphics.h> 
#include <conio.h> 
#include <iostream> 
using namespace std; 
int main() { 
    int gd = DETECT, gm; 
    int choice; 
    // Initialize graphics mode 
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // For Turbo C++ users 
    // Clear screen and set background 
    setbkcolor(WHITE); 
    cleardevice(); 
 
    // Menu Display 
    cout << "==== Graphical Editor ====" << endl; 
    cout << "1. Draw Line" << endl; 
    cout << "2. Draw Rectangle" << endl; 
    cout << "3. Draw Circle" << endl; 
    cout << "Enter your choice (1-3): "; 
    cin >> choice; 
    
    // Draw the shape based on choice 
    switch(choice) { 
        case 1: 
            setcolor(RED); 
            line(100, 100, 300, 100); // x1, y1, x2, y2 
            outtextxy(150, 120, "Line Drawn"); 
            break; 
 
        case 2: 
            setcolor(GREEN); 
            rectangle(150, 150, 300, 250); // left, top, right, bottom 
            outtextxy(170, 260, "Rectangle Drawn"); 
            break; 
 
        case 3: 
            setcolor(BLUE); 
            circle(250, 200, 50); // x, y, radius 
            outtextxy(220, 260, "Circle Drawn"); 
            break; 
 
        default: 
            setcolor(BLACK); 
            outtextxy(100, 100, "Invalid Choice!"); 
            break; 
    } 
 
    getch();       // Wait for user input 
    closegraph();  // Close the graphics window 
    return 0; 
} 