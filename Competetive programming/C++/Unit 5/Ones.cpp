#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "===== ONES =====\n\n";
    cout << "Enter a number N: ";
    cout << "\nExample: 3\n\n";

    cin >> n;

    int count = 1;
    long long remainder = 1 % n;
    while(remainder != 0) {

        remainder = (remainder * 10 + 1) % n;
        count++;
    }
    cout << "\nSmallest number of 1's required = "
         << count << endl;

    return 0;
}

