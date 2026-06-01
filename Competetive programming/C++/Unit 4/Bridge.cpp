#include <iostream>
using namespace std;

int main() {

    int a, b, c, d;

    cout << "===== BRIDGE PROBLEM =====\n\n";

    cout << "Enter crossing times in ascending order.\n";
    cout << "Example: 1 2 5 10\n\n";

    cout << "Person 1 time: ";
    cin >> a;

    cout << "Person 2 time: ";
    cin >> b;

    cout << "Person 3 time: ";
    cin >> c;

    cout << "Person 4 time: ";
    cin >> d;

    int method1 = a + 2*b + d;
    int method2 = 2*a + c + d;

    int answer = min(method1, method2);

    cout << "\nMinimum Time Required = " << answer << endl;

    return 0;
}