#include <iostream>
#include <string>
using namespace std;

int main() {

    string encrypted;
    string key = "the quick brown fox jumps over the lazy dog";

    cout << "Enter encrypted sentence:\n";
    getline(cin, encrypted);

    if(encrypted.length() != key.length()) {
        cout << "No solution";
        return 0;
    }

    char mp[256] = {0};

    for(int i = 0; i < key.length(); i++) {

        if(key[i] == ' ') {

            if(encrypted[i] != ' ') {
                cout << "No solution";
                return 0;
            }
        }
        else {
            mp[(int)encrypted[i]] = key[i];
        }
    }

    cout << "\nDecoded Message:\n";

    for(char c : encrypted) {

        if(c == ' ')
            cout << " ";
        else
            cout << mp[(int)c];
    }

    return 0;
}