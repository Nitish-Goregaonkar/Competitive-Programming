#include <iostream>
using namespace std;

int main() {

    int teams;

    cout << "Enter number of teams: ";
    cin >> teams;

    int solved[100], penalty[100];

    for(int i = 0; i < teams; i++) {

        cout << "\nTeam " << i + 1 << endl;

        cout << "Problems Solved: ";
        cin >> solved[i];

        cout << "Penalty Time: ";
        cin >> penalty[i];
    }

    cout << "\n--- Contest Scoreboard ---\n";

    for(int i = 0; i < teams; i++) {

        cout << "Team " << i + 1
             << " -> Solved: " << solved[i]
             << " Penalty: " << penalty[i]
             << endl;
    }

    return 0;
}