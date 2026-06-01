#include <iostream>
using namespace std;

long long reverseNumber(long long n) {

    long long rev = 0;

    while(n > 0) {

        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

bool isPalindrome(long long n) {

    return n == reverseNumber(n);
}

int main() {

    long long num;

    cout << "===== REVERSE AND ADD =====\n\n";

    cout << "Enter a number:\n";
    cout << "Example: 195\n\n";

    cin >> num;

    int iterations = 0;

    while(!isPalindrome(num)) {

        long long rev = reverseNumber(num);

        num = num + rev;

        iterations++;
    }

    cout << "\nPalindrome Found = "
         << num << endl;

    cout << "Number of Iterations = "
         << iterations << endl;

    return 0;
}