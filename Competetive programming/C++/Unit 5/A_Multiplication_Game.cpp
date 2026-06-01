#include <iostream>
using namespace std;

int main() {

    long long n;
    double p = 1;

    cout << "===== A MULTIPLICATION GAME =====\n\n";

    cout << "Enter target number N: ";
    cout << "\nExample: 162\n\n";

    cin >> n;

    bool stanTurn = true;

    while(p < n) {

        if(stanTurn)
            p *= 9;
        else
            p *= 2;

        stanTurn = !stanTurn;
    }

    if(!stanTurn)
        cout << "\nWinner: Stan\n";
    else
        cout << "\nWinner: Ollie\n";

    return 0;
}