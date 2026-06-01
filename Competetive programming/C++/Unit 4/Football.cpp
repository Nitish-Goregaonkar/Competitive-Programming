#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Team {
    string name;
    int points = 0;
    int wins = 0;
    int ties = 0;
    int losses = 0;
    int goalsScored = 0;
    int goalsAgainst = 0;
};

int main() {

    int n;

    cout << "===== FOOTBALL TOURNAMENT =====\n\n";

    cout << "Enter number of teams: ";
    cin >> n;

    vector<Team> teams(n);

    cout << "\nEnter team names:\n";

    for(int i = 0; i < n; i++) {
        cout << "Team " << i + 1 << ": ";
        cin >> teams[i].name;
    }

    int matches;

    cout << "\nEnter number of matches played: ";
    cin >> matches;

    cout << "\nEnter match details:\n";
    cout << "Format:\n";
    cout << "Team1 Team2 GoalsByTeam1 GoalsByTeam2\n";
    cout << "Example: Brazil Argentina 2 1\n\n";

    for(int i = 0; i < matches; i++) {

        string t1, t2;
        int g1, g2;

        cin >> t1 >> t2 >> g1 >> g2;

        int a = -1, b = -1;

        for(int j = 0; j < n; j++) {
            if(teams[j].name == t1) a = j;
            if(teams[j].name == t2) b = j;
        }

        teams[a].goalsScored += g1;
        teams[a].goalsAgainst += g2;

        teams[b].goalsScored += g2;
        teams[b].goalsAgainst += g1;

        if(g1 > g2) {
            teams[a].points += 3;
            teams[a].wins++;
            teams[b].losses++;
        }
        else if(g2 > g1) {
            teams[b].points += 3;
            teams[b].wins++;
            teams[a].losses++;
        }
        else {
            teams[a].points++;
            teams[b].points++;
            teams[a].ties++;
            teams[b].ties++;
        }
    }

    sort(teams.begin(), teams.end(),
        [](Team a, Team b) {
            return a.points > b.points;
        });

    cout << "\n===== FINAL STANDINGS =====\n\n";

    for(int i = 0; i < n; i++) {

        cout << i + 1 << ". "
             << teams[i].name
             << " | Points: " << teams[i].points
             << " | W:" << teams[i].wins
             << " D:" << teams[i].ties
             << " L:" << teams[i].losses
             << " | GD:"
             << (teams[i].goalsScored - teams[i].goalsAgainst)
             << endl;
    }

    return 0;
}