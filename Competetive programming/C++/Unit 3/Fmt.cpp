#include <iostream>
#include <string>
using namespace std;

int main() {

    string text;

    cout << "===== FMT (TEXT FORMATTER) =====\n\n";

    cout << "Enter a paragraph:\n";
    cout << "Example: This is a sample paragraph for testing the formatter.\n\n";

    getline(cin, text);

    cout << "\nFormatted Output:\n\n";

    int count = 0;

    for(char ch : text) {

        cout << ch;
        count++;

        if(count >= 50 && ch == ' ') {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}