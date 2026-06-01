#include <iostream>
#include <string>
using namespace std;

int main() {

    int rows, cols;

    cout << "===== WHERE'S WALDORF? =====\n\n";

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    string grid[20];

    cout << "\nEnter the grid:\n";

    for(int i = 0; i < rows; i++)
        cin >> grid[i];

    string word;

    cout << "\nEnter word to search: ";
    cin >> word;

    bool found = false;

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < cols; j++) {

            int k;

            for(k = 0; k < word.length(); k++) {

                if(j + k >= cols || grid[i][j + k] != word[k])
                    break;
            }

            if(k == word.length()) {

                cout << "\nWord found at Row "
                     << i + 1
                     << " Column "
                     << j + 1
                     << endl;

                found = true;
            }
        }
    }

    if(!found)
        cout << "\nWord not found.\n";

    return 0;
}