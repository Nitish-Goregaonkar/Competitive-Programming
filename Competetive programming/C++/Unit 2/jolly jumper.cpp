#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    int diff[100] = {0};

    cout << "Enter the numbers:\n";

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n - 1; i++) {

        int d = abs(arr[i] - arr[i + 1]);

        if(d >= 1 && d <= n - 1)
            diff[d] = 1;
    }

    bool jolly = true;

    for(int i = 1; i <= n - 1; i++) {

        if(diff[i] == 0) {
            jolly = false;
            break;
        }
    }

    if(jolly)
        cout << "\nJolly Jumper";
    else
        cout << "\nNot Jolly";

    return 0;
}