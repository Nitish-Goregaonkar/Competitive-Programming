#include <iostream>
using namespace std;

struct Job {
    int id;
    int time;
    int fine;
};

int main() {

    int n;

    cout << "===== SHOEMAKER'S PROBLEM =====\n\n";

    cout << "Enter number of jobs: ";
    cin >> n;

    Job jobs[100];

    cout << "\nEnter Time and Fine for each job.\n";
    cout << "Example: Time=3 Fine=4\n\n";

    for(int i = 0; i < n; i++) {

        jobs[i].id = i + 1;

        cout << "Job " << i + 1 << " Time: ";
        cin >> jobs[i].time;

        cout << "Job " << i + 1 << " Fine: ";
        cin >> jobs[i].fine;
    }

    for(int i = 0; i < n - 1; i++) {

        for(int j = i + 1; j < n; j++) {

            if(jobs[i].fine * jobs[j].time <
               jobs[j].fine * jobs[i].time) {

                Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    cout << "\nOptimal Job Order:\n";

    for(int i = 0; i < n; i++) {
        cout << jobs[i].id << " ";
    }

    cout << endl;

    return 0;
}