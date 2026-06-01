#include <iostream>
#include <string>
using namespace std;

int main() {

    string keyboard =
    "`1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";

    string text;

    cout << "===== WERTYU =====\n\n";

    cout << "Enter text:\n";
    cout << "Example: O S, GOMR YPFSU?\n\n";

    getline(cin, text);

    cout << "\nDecoded Text:\n";

    for(char ch : text) {

        if(ch == ' ') {
            cout << " ";
            continue;
        }

        for(int i = 0; i < keyboard.length(); i++) {

            if(ch == keyboard[i]) {
                cout << keyboard[i - 1];
                break;
            }
        }
    }

    return 0;
}
// JR;;P