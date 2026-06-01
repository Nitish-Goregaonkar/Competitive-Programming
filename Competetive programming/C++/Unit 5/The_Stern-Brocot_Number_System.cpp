#include <iostream>
using namespace std;

int main() {

    int m, n;

    cout << "===== STERN-BROCOT NUMBER SYSTEM =====\n\n";

    cout << "Enter numerator and denominator:\n";
    cout << "Example: 5 2\n\n";

    cin >> m >> n;

    int leftNum = 0, leftDen = 1;
    int rightNum = 1, rightDen = 0;
    int midNum = 1, midDen = 1;

    cout << "\nPath: ";

    while (!(midNum == m && midDen == n)) {

        if ((long long)m * midDen <
            (long long)n * midNum) {

            cout << "L";

            rightNum = midNum;
            rightDen = midDen;

            midNum = leftNum + rightNum;
            midDen = leftDen + rightDen;
        }
        else {

            cout << "R";

            leftNum = midNum;
            leftDen = midDen;

            midNum = leftNum + rightNum;
            midDen = leftDen + rightDen;
        }
    }

    cout << endl;

    return 0;
}