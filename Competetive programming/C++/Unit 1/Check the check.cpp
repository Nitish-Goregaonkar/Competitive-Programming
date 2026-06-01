#include <iostream>
using namespace std;

string board[8];

bool inside(int x, int y) {
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

bool check(int x, int y, char color) {

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
        return true;

    if(inside(x+dir,y+1) && board[x+dir][y+1]==pawn)
        return true;

    // Knight
    for(auto &k : knight) {
        int nx=x+k[0];
        int ny=y+k[1];

        if(inside(nx,ny) && board[nx][ny]==knightP)
            return true;
    }

    // Bishop + Queen
    for(auto &b : bishop) {
        int nx=x+b[0];
        int ny=y+b[1];

        while(inside(nx,ny)) {

            char p=board[nx][ny];

            if(p!='.') {
                if(p==bishopP || p==queenP)
                    return true;
                break;
            }

            nx += b[0];
            ny += b[1];
        }
    }

    // Rook + Queen
    for(auto &r : rook) {
        int nx=x+r[0];
        int ny=y+r[1];

        while(inside(nx,ny)) {

            char p=board[nx][ny];

            if(p!='.') {
                if(p==rookP || p==queenP)
                    return true;
                break;
            }

            nx += r[0];
            ny += r[1];
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
                return true;
        }
    }

    return false;
}

int main() {

    int game=1;

    while(true) {

        bool empty=true;

        for(int i=0;i<8;i++) {
            cin >> board[i];

            if(board[i]!="........")
                empty=false;
        }

        if(empty)
            break;

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
            cout << "Game #" << game << ": white king is in check.\n";

        else if(check(bx,by,'b'))
            cout << "Game #" << game << ": black king is in check.\n";

        else
            cout << "Game #" << game << ": no king is in check.\n";

        game++;
    }

    return 0;
}