#include <iostream>
#include <string>
using namespace std;

int main() {

    string word1, word2;

    cout << "Enter first word: ";
    cin >> word1;

    cout << "Enter second word: ";
    cin >> word2;

    if(word1.length() != word2.length()) {
        cout << "\nNot Doublets (different lengths)";
        return 0;
    }

    int diff = 0;

    for(int i = 0; i < word1.length(); i++) {
        if(word1[i] != word2[i])
            diff++;
    }

    if(diff == 1)
        cout << "\nDoublets";
    else
        cout << "\nNot Doublets";

    return 0;
}