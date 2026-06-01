#include <iostream>
using namespace std;

long long factorial(int n) {

    long long fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {

    int n, k;

    cout << "===== POLYNOMIAL COEFFICIENTS =====\n\n";

    cout << "Enter value of n: ";
    cout << "\nExample: 5\n";
    cin >> n;

    cout << "\nEnter number of groups k: ";
    cout << "\nExample: 3\n";
    cin >> k;

    int a[20];

    cout << "\nEnter " << k
         << " values whose sum = "
         << n << endl;

    cout << "Example: 2 2 1\n\n";

    for(int i = 0; i < k; i++) {
        cin >> a[i];
    }

    long long answer = factorial(n);

    for(int i = 0; i < k; i++) {
        answer /= factorial(a[i]);
    }

    cout << "\nPolynomial Coefficient = "
         << answer << endl;

    return 0;
}