#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of cards: ";
    cin >> n;

    int cards[100];

    cout << "Enter card numbers:\n";

    for(int i = 0; i < n; i++)
        cin >> cards[i];

    // Simple shuffle: reverse deck
    for(int i = 0; i < n/2; i++) {
        swap(cards[i], cards[n-1-i]);
    }

    cout << "\nCards after shuffle:\n";

    for(int i = 0; i < n; i++)
        cout << cards[i] << " ";

    return 0;
}