#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <cmath> 
using namespace std; 
 
int main() { 
    int n; 
    cout << "Enter number of students (0 to exit): "; 
    cin >> n; 
 
    if (n == 0) return 0; 
 
    vector<double> expenses(n); 
    double total = 0.0; 
 
    cout << "Enter the expenses of each student:\n"; 
    for (int i = 0; i < n; ++i) { 
        cin >> expenses[i]; 
        total += expenses[i]; 
    } 
 
    double average = total / n; 
    double exchange = 0.0; 
 
    for (int i = 0; i < n; ++i) { 
        if (expenses[i] > average) 
            exchange += expenses[i] - average; 
    } 
 
    cout << fixed << setprecision(2); 
    cout << "Minimum amount to be exchanged: $" << exchange << endl; 
 
    return 0; 
} 