#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "===== VITO'S FAMILY =====\n\n";

    cout << "Enter number of relatives: ";
    cin >> n;

    int street[100];

    cout << "\nEnter street numbers of relatives:\n";
    cout << "Example: 2 4 6 8 10\n\n";

    for(int i = 0; i < n; i++) {
        cin >> street[i];
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {

            if(street[j] > street[j + 1]) {

                int temp = street[j];
                street[j] = street[j + 1];
                street[j + 1] = temp;
            }
        }
    }

    int median = street[n / 2];

    int totalDistance = 0;

    for(int i = 0; i < n; i++) {

        totalDistance += abs(street[i] - median);
    }

    cout << "\nBest Street Number = " << median << endl;
    cout << "Minimum Total Distance = " << totalDistance << endl;

    return 0;
}