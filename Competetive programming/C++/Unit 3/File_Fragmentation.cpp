#include <iostream>
#include <string>
using namespace std;

int main() {

    string fragment1, fragment2;

    cout << "===== FILE FRAGMENTATION =====\n\n";

    cout << "Enter First Fragment:\n";
    cout << "Example: HELLO\n";
    cin >> fragment1;

    cout << "\nEnter Second Fragment:\n";
    cout << "Example: WORLD\n";
    cin >> fragment2;

    string original = fragment1 + fragment2;

    cout << "\nOriginal File Reconstructed:\n";
    cout << original << endl;

    return 0;
}