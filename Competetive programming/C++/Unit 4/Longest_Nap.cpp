#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "===== LONGEST NAP =====\n\n";

    cout << "Enter number of appointments: ";
    cin >> n;

    int start[100], end[100];

    cout << "\nEnter appointments in 24-hour format.\n";
    cout << "Example: 10 11 (means 10:00 AM to 11:00 AM)\n\n";

    for(int i = 0; i < n; i++) {

        cout << "Appointment " << i + 1 << " Start Hour: ";
        cin >> start[i];

        cout << "Appointment " << i + 1 << " End Hour: ";
        cin >> end[i];
    }

    int longest = start[0] - 10;

    for(int i = 0; i < n - 1; i++) {

        int gap = start[i + 1] - end[i];

        if(gap > longest)
            longest = gap;
    }

    int lastGap = 18 - end[n - 1];

    if(lastGap > longest)
        longest = lastGap;

    cout << "\nLongest Nap Duration = "
         << longest
         << " hour(s)\n";

    return 0;
}