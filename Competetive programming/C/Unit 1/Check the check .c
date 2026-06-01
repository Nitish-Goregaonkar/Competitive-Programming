#include <stdio.h>
#include <string.h>

char board[8][10];

int inside(int x, int y) {
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

int check(int x, int y, char color) {

    int knight[8][2] = {
        {-2,-1},{-2,1},{2,-1},{2,1},
        {-1,-2},{-1,2},{1,-2},{1,2}
    };

    int bishop[4][2] = {
        {-1,-1},{-1,1},{1,-1},{1,1}
    };

    int rook[4][2] = {
        {-1,0},{1,0},{0,-1},{0,1}
    };

    char pawn = (color=='w') ? 'p' : 'P';
    char knightP = (color=='w') ? 'n' : 'N';
    char bishopP = (color=='w') ? 'b' : 'B';
    char rookP = (color=='w') ? 'r' : 'R';
    char queenP = (color=='w') ? 'q' : 'Q';
    char kingP = (color=='w') ? 'k' : 'K';

    int dir = (color=='w') ? -1 : 1;

    // Pawn
    if(inside(x+dir,y-1) && board[x+dir][y-1]==pawn)
        return 1;

    if(inside(x+dir,y+1) && board[x+dir][y+1]==pawn)
        return 1;

    // Knight
    for(int i=0;i<8;i++) {
        int nx=x+knight[i][0];
        int ny=y+knight[i][1];

        if(inside(nx,ny) && board[nx][ny]==knightP)
            return 1;
    }

    // Bishop + Queen
    for(int i=0;i<4;i++) {
        int nx=x+bishop[i][0];
        int ny=y+bishop[i][1];

        while(inside(nx,ny)) {
            char p = board[nx][ny];

            if(p!='.') {
                if(p==bishopP || p==queenP)
                    return 1;
                break;
            }

            nx += bishop[i][0];
            ny += bishop[i][1];
        }
    }

    // Rook + Queen
    for(int i=0;i<4;i++) {
        int nx=x+rook[i][0];
        int ny=y+rook[i][1];

        while(inside(nx,ny)) {
            char p = board[nx][ny];

            if(p!='.') {
                if(p==rookP || p==queenP)
                    return 1;
                break;
            }

            nx += rook[i][0];
            ny += rook[i][1];
        }
    }

    // King
    for(int dx=-1;dx<=1;dx++) {
        for(int dy=-1;dy<=1;dy++) {

            if(dx==0 && dy==0)
                continue;

            int nx=x+dx;
            int ny=y+dy;

            if(inside(nx,ny) && board[nx][ny]==kingP)
                return 1;
        }
    }

    return 0;
}

int main() {

    int game=1;

    while(1) {

        int empty=1;

        for(int i=0;i<8;i++) {
            scanf("%s", board[i]);

            if(strcmp(board[i],"........")!=0)
                empty=0;
        }

        if(empty)
            break;

        getchar();

        int wx,wy,bx,by;

        for(int i=0;i<8;i++) {
            for(int j=0;j<8;j++) {

                if(board[i][j]=='K') {
                    wx=i;
                    wy=j;
                }

                if(board[i][j]=='k') {
                    bx=i;
                    by=j;
                }
            }
        }

        if(check(wx,wy,'w'))
            printf("Game #%d: white king is in check.\n",game);

        else if(check(bx,by,'b'))
            printf("Game #%d: black king is in check.\n",game);

        else
            printf("Game #%d: no king is in check.\n",game);

        game++;
    }

    return 0;
}