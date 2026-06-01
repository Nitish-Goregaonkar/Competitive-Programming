#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int value(char c) {
    if(c >= '2' && c <= '9') return c - '0';
    if(c == 'T') return 10;
    if(c == 'J') return 11;
    if(c == 'Q') return 12;
    if(c == 'K') return 13;
    return 14; // Ace
}

int rankHand(vector<string> hand) {

    vector<int> v;
    vector<char> suits;

    for(auto card : hand) {
        v.push_back(value(card[0]));
        suits.push_back(card[1]);
    }

    sort(v.begin(), v.end());

    bool flush = true;
    for(int i = 1; i < 5; i++) {
        if(suits[i] != suits[0])
            flush = false;
    }

    bool straight = true;
    for(int i = 1; i < 5; i++) {
        if(v[i] != v[i-1] + 1)
            straight = false;
    }

    map<int,int> freq;
    for(int x : v)
        freq[x]++;

    int four = 0, three = 0, pairs = 0;

    for(auto p : freq) {
        if(p.second == 4) four = 1;
        if(p.second == 3) three = 1;
        if(p.second == 2) pairs++;
    }

    if(straight && flush) return 8;
    if(four) return 7;
    if(three && pairs) return 6;
    if(flush) return 5;
    if(straight) return 4;
    if(three) return 3;
    if(pairs == 2) return 2;
    if(pairs == 1) return 1;

    return 0;
}

int main() {

    vector<string> black(5), white(5);

    cout << "Enter 5 cards for Black:\n";
    for(int i = 0; i < 5; i++)
        cin >> black[i];

    cout << "Enter 5 cards for White:\n";
    for(int i = 0; i < 5; i++)
        cin >> white[i];

    int b = rankHand(black);
    int w = rankHand(white);

    if(b > w)
        cout << "\nBlack wins.\n";
    else if(w > b)
        cout << "\nWhite wins.\n";
    else
        cout << "\nTie.\n";

    return 0;
}