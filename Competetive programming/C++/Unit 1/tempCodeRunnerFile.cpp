#include <iostream> 
using namespace std; 
int main() { 
    int n; 
 
    // Get input from the user 
    cout << "Enter a positive integer: "; 
    cin >> n; 
 
    // Check if input is valid 
    if (n <= 0) { 
        cout << "Please enter a number greater than 0." << endl; 
        return 1; // exit with error 
    } 
 
    cout << "3n + 1 sequence: "; 
 
    // Repeat until n becomes 1 
    while (n != 1) { 
        cout << n << " -> "; 
 
        // Apply the 3n + 1 rule 
        if (n % 2 == 0) { 
            n = n / 2;        // If even 
        } else { 
            n = 3 * n + 1;    // If odd 
        } 
    } 
 
    // Print the final 1 
    cout << "1" << endl; 
    return 0; 
} 