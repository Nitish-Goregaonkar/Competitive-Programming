#include <iostream>
using namespace std;
int main() {
    long long num1, num2;
    cout << "===== PRIMARY ARITHMETIC =====\n\n";
    cout << "Enter First Number:\n";
    cout << "Example: 123\n";
    cin >> num1;
    cout << "\nEnter Second Number:\n";
    cout << "Example: 594\n";
    cin >> num2;
    int carry = 0;
    int carryCount = 0;
    while(num1 > 0 || num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;
        int sum = digit1 + digit2 + carry;
        if(sum >= 10) {
            carry = 1;
            carryCount++;
        }
        else {
            carry = 0;
        }
        num1 /= 10;
        num2 /= 10;
    }
    if(carryCount == 0)
        cout << "\nNo carry operation.\n";
    else if(carryCount == 1)
        cout << "\n1 carry operation.\n";
    else
        cout << "\n" << carryCount << " carry operations.\n";
    return 0;
}