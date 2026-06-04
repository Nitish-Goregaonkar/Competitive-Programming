#include <stdio.h>

char board[8][8];

int main() {

    printf("===== CHECK THE CHECK =====\n\n");

    printf("Enter chess board (8 rows).\n");
    printf("Use:\n");
    printf("K = White King\n");
    printf("k = Black King\n");
    printf("R = White Rook\n");
    printf("r = Black Rook\n");
    printf(". = Empty Square\n\n");

    printf("Example Row:\n");
    printf("....k...\n\n");

    for(int i = 0; i < 8; i++) {

        printf("Enter Row %d: ", i + 1);

        scanf("%s", board[i]);
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
    int whiteCheck = 0;
    int blackCheck = 0;
    /* Check if black rook attacks white king */
    for(int i = 0; i < 8; i++) {

        if(board[i][wy] == 'r')
            whiteCheck = 1;
    }
    /* Check if white rook attacks black king */
    for(int i = 0; i < 8; i++) {
        if(board[i][by] == 'R')
            blackCheck = 1;
    }
    printf("\n===== RESULT =====\n");
    if(whiteCheck)
        printf("White King is in Check\n");
    else if(blackCheck)
        printf("Black King is in Check\n");
    else
        printf("No King is in Check\n");
    return 0;
}