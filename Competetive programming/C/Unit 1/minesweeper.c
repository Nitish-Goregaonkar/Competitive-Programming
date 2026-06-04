#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define SIZE 3 
int main() { 
    int mineRow, mineCol; 
    int guessRow, guessCol; 
    char board[SIZE][SIZE]; 
    // Initialize the game board with '-' 
    for (int i = 0; i < SIZE; i++) { 
        for (int j = 0; j < SIZE; j++) { 
            board[i][j] = '-'; 
        } 
    } 
    // Randomly place one mine 
    srand(time(NULL)); 
    mineRow = rand() % SIZE; 
    mineCol = rand() % SIZE; 
    // Show initial board 
    printf("Welcome to Minesweeper (3x3, 1 Mine)\n"); 
    printf("Board:\n"); 
    for (int i = 0; i < SIZE; i++) { 
        for (int j = 0; j < SIZE; j++) { 
            printf("%c ", board[i][j]); 
        } 
        printf("\n"); 
    } 
    // Ask user for a guess 
    printf("Enter your guess (row and column between 0 and 2): "); 
    scanf("%d %d", &guessRow, &guessCol); 
    // Check guess 
    if (guessRow == mineRow && guessCol == mineCol) { 
        printf("BOOM! You hit the mine! Game Over.\n"); 
        board[guessRow][guessCol] = '*'; 
    } else { 
        printf("Safe! No mine here.\n"); 
        board[guessRow][guessCol] = '0'; 
    } 
    // Show final board 
    printf("Final Board:\n"); 
    for (int i = 0; i < SIZE; i++) { 
        for (int j = 0; j < SIZE; j++) { 
            printf("%c ", board[i][j]); 
        } 
        printf("\n"); 
    } 
    // Show where the mine was 
    printf("Mine was at: (%d, %d)\n", mineRow, mineCol); 
    return 0;}