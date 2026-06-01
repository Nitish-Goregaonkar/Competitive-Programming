#include <iostream>
using namespace std;

void flip(int arr[], int k) {

    int start = 0;

    while(start < k) {

        int temp = arr[start];
        arr[start] = arr[k];
        arr[k] = temp;

        start++;
        k--;
    }
}

int main() {

    int n;

    cout << "===== STACKS OF FLAPJACKS =====\n\n";

    cout << "Enter number of pancakes: ";
    cin >> n;

    int arr[100];

    cout << "\nEnter pancake sizes from top to bottom:\n";
    cout << "Example: 1 5 3 4 2\n\n";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nOriginal Stack:\n";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int curr = n - 1; curr > 0; curr--) {

        int maxIndex = 0;

        for(int i = 1; i <= curr; i++) {

            if(arr[i] > arr[maxIndex])
                maxIndex = i;
        }

        if(maxIndex != curr) {

            if(maxIndex != 0) {

                flip(arr, maxIndex);
                cout << "\nFlip at position " << maxIndex + 1;
            }

            flip(arr, curr);
            cout << "\nFlip at position " << curr + 1;
        }
    }

    cout << "\n\nSorted Pancakes:\n";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}