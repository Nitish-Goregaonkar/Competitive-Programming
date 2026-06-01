#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    int t;
    cin >> t;
    cin.ignore();
    cin.ignore();

    while(t--) {

        int n;
        cin >> n;
        cin.ignore();

        vector<string> candidates(n);

        for(int i=0;i<n;i++)
            getline(cin,candidates[i]);

        vector<vector<int>> ballots;

        string line;

        while(getline(cin,line) && line!="") {

            stringstream ss(line);

            vector<int> temp;

            int x;

            while(ss >> x)
                temp.push_back(x-1);

            ballots.push_back(temp);
        }

        vector<bool> active(n,true);

        while(true) {

            vector<int> votes(n,0);

            for(auto &ballot : ballots) {

                for(int c : ballot) {

                    if(active[c]) {
                        votes[c]++;
                        break;
                    }
                }
            }

            int mx=0,mn=100000;

            for(int i=0;i<n;i++) {

                if(active[i]) {

                    mx=max(mx,votes[i]);
                    mn=min(mn,votes[i]);
                }
            }

            if(mx > ballots.size()/2) {

                for(int i=0;i<n;i++) {
                    if(votes[i]==mx)
                        cout << candidates[i] << endl;
                }

                break;
            }

            if(mx==mn) {

                for(int i=0;i<n;i++) {
                    if(active[i])
                        cout << candidates[i] << endl;
                }

                break;
            }

            for(int i=0;i<n;i++) {
                if(votes[i]==mn)
                    active[i]=false;
            }
        }

        if(t)
            cout << endl;
    }

    return 0;
}