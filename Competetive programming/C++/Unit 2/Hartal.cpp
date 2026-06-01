#include <iostream>
using namespace std;

int main() {

    int days, parties;

    cout << "Enter total number of days: ";
    cin >> days;

    cout << "Enter number of political parties: ";
    cin >> parties;

    int h[20];

    cout << "Enter hartal parameter for each party:\n";

    for(int i = 0; i < parties; i++)
        cin >> h[i];

    int lostDays = 0;

    for(int day = 1; day <= days; day++) {

        if(day % 7 == 6 || day % 7 == 0)
            continue;

        for(int i = 0; i < parties; i++) {

            if(day % h[i] == 0) {
                lostDays++;
                break;
            }
        }
    }

    cout << "\nLost Working Days = " << lostDays;

    return 0;
}