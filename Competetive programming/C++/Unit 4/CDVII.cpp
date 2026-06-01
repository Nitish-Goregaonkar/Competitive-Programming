#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Record {
    string plate;
    int hour;
    string type;
    int km;
};

int main() {

    int rate[24];

    cout << "===== CDVII BILLING SYSTEM =====\n\n";

    cout << "Enter 24 hourly rates:\n";
    cout << "Example:\n";
    cout << "1 1 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 3 2 2 2 2 1 1\n\n";

    for(int i = 0; i < 24; i++)
        cin >> rate[i];

    int n;

    cout << "\nEnter number of records: ";
    cin >> n;

    vector<Record> rec(n);

    cout << "\nEnter records in format:\n";
    cout << "Plate Hour enter/exit Kilometer\n";
    cout << "Example:\n";
    cout << "ABC123 10 enter 100\n";
    cout << "ABC123 12 exit 180\n\n";

    for(int i = 0; i < n; i++) {

        cin >> rec[i].plate;
        cin >> rec[i].hour;
        cin >> rec[i].type;
        cin >> rec[i].km;
    }

    sort(rec.begin(), rec.end(),
        [](Record a, Record b) {
            return a.hour < b.hour;
        });

    double total = 0;

    for(int i = 0; i < n - 1; i++) {

        if(rec[i].plate == rec[i+1].plate &&
           rec[i].type == "enter" &&
           rec[i+1].type == "exit") {

            int distance = abs(rec[i+1].km - rec[i].km);

            total += 1.0; // account fee
            total += 2.0; // trip fee
            total += (distance * rate[rec[i].hour]) / 100.0;
        }
    }

    cout << "\nTotal Bill = $" << total << endl;

    return 0;
}