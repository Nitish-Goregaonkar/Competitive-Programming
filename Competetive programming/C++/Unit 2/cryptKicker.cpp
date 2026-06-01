#include <iostream>
#include <string>
using namespace std;

int main() {

    string encrypted;

    cout << "Enter encrypted text: ";
    getline(cin, encrypted);

    string decrypted = "";

    // Shift every letter back by 1
    for(char ch : encrypted) {

        if(ch >= 'b' && ch <= 'z')
            decrypted += ch - 1;

        else if(ch >= 'B' && ch <= 'Z')
            decrypted += ch - 1;

        else if(ch == 'a')
            decrypted += 'z';

        else if(ch == 'A')
            decrypted += 'Z';

        else
            decrypted += ch;
    }

    cout << "\nDecrypted Text: " << decrypted;

    return 0;
}