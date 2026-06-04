#include <iostream>
using namespace std;
int main() {
    char board[8][9];
    cout << "===== CHECK THE CHECK =====\n\n";
    cout << "Enter 8 rows of the chess board.\n";
    cout << "Use:\n";
    cout << "K = White King\n";
    cout << "k = Black King\n";
    cout << "R = White Rook\n";
    cout << "r = Black Rook\n";
    cout << ". = Empty Square\n\n";
    cout << "Example Row:\n";
    cout << "....k...\n\n";
    for(int i = 0; i < 8; i++) {

        cout << "Enter Row " << i + 1 << ": ";

        cin >> board[i];
    }
    int wx = -1, wy = -1;
    int bx = -1, by = -1;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(board[i][j] == 'K') {
                wx = i;
                wy = j;
            }
            if(board[i][j] == 'k') {
                bx = i;
                by = j;
            }
        }
    }
    bool whiteCheck = false;
    bool blackCheck = false;
    for(int i = 0; i < 8; i++) {
        if(board[i][wy] == 'r')
            whiteCheck = true;
    }
    for(int i = 0; i < 8; i++) {
        if(board[i][by] == 'R')
            blackCheck = true;
    }
    cout << "\n===== RESULT =====\n";
    if(whiteCheck)
        cout << "White King is in Check\n";
    else if(blackCheck)
        cout << "Black King is in Check\n";
    else
        cout << "No King is in Check\n";
    return 0;
}