#include <iostream>
using namespace std;

int main() {

    int s1, s2, s3;
    int a, b, c;

    cout << "===== PAIRSUMONIOUS NUMBERS =====\n\n";

    cout << "Enter three pair sums:\n";
    cout << "Format:\n";
    cout << "a+b  a+c  b+c\n\n";

    cout << "Example:\n";
    cout << "3 4 5\n\n";

    cin >> s1 >> s2 >> s3;

    a = (s1 + s2 - s3) / 2;
    b = s1 - a;
    c = s2 - a;

    cout << "\nOriginal Numbers:\n";
    cout << a << " " << b << " " << c << endl;

    return 0;
}