#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

    long long N;

    cout << "===== THE ARCHEOLOGIST'S DILEMMA =====\n\n";

    cout << "Enter the starting digits:\n";
    cout << "Example: 12\n\n";

    cin >> N;

    int exponent = 1;

    while (true) {

        double value = pow(2.0, exponent);

        string s = to_string((long long)value);

        long long prefix = stoll(s);

        while (prefix > N)
            prefix /= 10;

        if (prefix == N) {

            cout << "\nSmallest Exponent = "
                 << exponent << endl;

            break;
        }

        exponent++;
    }

    return 0;
}