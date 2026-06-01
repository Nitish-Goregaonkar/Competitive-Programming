#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
 
const int SIZE = 3; 
 
int main() { 
    char board[SIZE][SIZE];      // Player board 
    int mineRow, mineCol;        // Mine location 
    int guessRow, guessCol;      // User guess 
 
    // Initialize board with '-' 
    for (int i = 0; i < SIZE; i++) 
        for (int j = 0; j < SIZE; j++) 
            board[i][j] = '-'; 
 
    // Place one random mine 
    srand(time(0));  // Seed random number 
    mineRow = rand() % SIZE; 
    mineCol = rand() % SIZE; 
 
    // Display initial board 
    cout << "Welcome to Simple Minesweeper (3x3, 1 Mine)\n"; 
    cout << "Board:\n"; 
    for (int i = 0; i < SIZE; i++) { 
        for (int j = 0; j < SIZE; j++) 
            cout << board[i][j] << " "; 
        cout << endl; 
    } 
 
    // Take user input 
    cout << "Enter your guess (row and column between 0 and 2): "; 
    cin >> guessRow >> guessCol; 
 
    // Check bounds 
    if (guessRow < 0 || guessRow >= SIZE || guessCol < 0 || guessCol >= SIZE) { 
        cout << "Invalid position. Try within range 0 to 2.\n"; 
        return 0; 
    } 
 
    // Check for mine 
    if (guessRow == mineRow && guessCol == mineCol) { 
        cout << "❌ BOOM! You hit the mine. Game Over.\n"; 
        board[guessRow][guessCol] = '*'; 
    } else { 
        cout << "❌ Safe! No mine here.\n"; 
        board[guessRow][guessCol] = '0';  // In full version, you'd show nearby mine count 
    } 
 
    // Final board 
    cout << "\nFinal Board:\n"; 
    for (int i = 0; i < SIZE; i++) { 
        for (int j = 0; j < SIZE; j++) 
            cout << board[i][j] << " "; 
        cout << endl; 
    } 
 
    // Reveal mine location 
    cout << "Mine was at: (" << mineRow << ", " << mineCol << ")\n"; 
 
    return 0; 
}