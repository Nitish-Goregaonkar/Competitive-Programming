#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    string correct, output;

    cout << "Enter Correct Output: ";
    getline(cin, correct);

    cout << "Enter User Output: ";
    getline(cin, output);

    if(correct == output) {
        cout << "\nAccepted";
    }
    else {

        string num1 = "", num2 = "";

        for(char c : correct)
            if(isdigit(c))
                num1 += c;

        for(char c : output)
            if(isdigit(c))
                num2 += c;

        if(num1 == num2)
            cout << "\nPresentation Error";
        else
            cout << "\nWrong Answer";
    }

    return 0;
}