#include <stdio.h> 
int main() { 
    int n; 
 
    // Take input from the user 
    printf("Enter a positive integer: "); 
    scanf("%d", &n); 
 
    if (n <= 0) { 
        printf("Please enter a number greater than 0.\n"); 
        return 1; 
    } 
 
    printf("3n + 1 sequence: "); 
 
    // Repeat the process until n becomes 1 
    while (n != 1) { 
        printf("%d -> ", n); 
        // Apply 3n + 1 rule 
        if (n % 2 == 0) { 
            n = n / 2;       // If even 
        } else { 
            n = 3 * n + 1;   // If odd 
        } 
    } 
 
    // Print the final 1 
    printf("1\n"); 
    return 0; 
}