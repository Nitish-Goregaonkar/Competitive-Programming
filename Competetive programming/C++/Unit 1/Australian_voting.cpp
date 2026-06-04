#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "===== AUSTRALIAN VOTING =====\n\n";
    cout << "Enter number of candidates: ";
    cin >> n;
    string names[20];
    int votes[20] = {0};
    for(int i = 0; i < n; i++) {
        cout << "\nEnter Candidate "
             << i + 1
             << " Name: ";
        cin >> names[i];
    }
    int voters;
    cout << "\nEnter number of voters: ";
    cin >> voters;
    cout << "\nCandidate List:\n";
    for(int i = 0; i < n; i++) {
        cout << i + 1
             << ". "
             << names[i]
             << endl;
    }
    cout << "\nNow enter vote numbers.\n";
    cout << "Example: Enter 1 for Candidate 1.\n\n";
    for(int i = 0; i < voters; i++) {
        int choice;
        cout << "Voter "
             << i + 1
             << " Vote: ";
        cin >> choice;
        if(choice >= 1 && choice <= n)
            votes[choice - 1]++;
    }
    int winner = 0;
    for(int i = 1; i < n; i++) {
        if(votes[i] > votes[winner])
            winner = i;
    }
    cout << "\n===== RESULT =====\n";
    for(int i = 0; i < n; i++) {
        cout << names[i]
             << " = "
             << votes[i]
             << " votes"
             << endl;
    }
    cout << "\nWinner = "
         << names[winner]
         << endl;
    return 0;    
}