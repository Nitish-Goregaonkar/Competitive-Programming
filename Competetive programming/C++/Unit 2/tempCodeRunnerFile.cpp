#include <iostream>
using namespace std;

int main() {

    int dice[5];
    int freq[7] = {0};

    cout << "Enter 5 dice values (1-6):\n";

    for(int i = 0; i < 5; i++) {
        cin >> dice[i];
        freq[dice[i]]++;
    }

    bool yahtzee = false, four = false, three = false, pair = false;

    for(int i = 1; i <= 6; i++) {

        if(freq[i] == 5)
            yahtzee = true;

        if(freq[i] == 4)
            four = true;

        if(freq[i] == 3)
            three = true;

        if(freq[i] == 2)
            pair = true;
    }

    if(yahtzee)
        cout << "\nYahtzee!\n";

    else if(four)
        cout << "\nFour of a Kind!\n";

    else if(three && pair)
        cout << "\nFull House!\n";

    else if(three)
        cout << "\nThree of a Kind!\n";

    else
        cout << "\nNo Special Combination.\n";

    return 0;
}