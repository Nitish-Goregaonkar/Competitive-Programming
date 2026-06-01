 #include <stdio.h> 
#include <math.h> 
 
int main() { 
    int n, i; 
    float expenses[1000], total = 0.0, average, exchange = 0.0; 
 
    printf("Enter number of students (0 to exit): "); 
    scanf("%d", &n); 
 
    if (n == 0) return 0; 
 
    printf("Enter the expenses of each student:\n"); 
    for (i = 0; i < n; i++) { 
        scanf("%f", &expenses[i]); 
        total += expenses[i]; 
    } 
 
    average = total / n; 
 
    for (i = 0; i < n; i++) { 
        if (expenses[i] > average) 
            exchange += expenses[i] - average; 
    } 
 
    printf("Minimum amount to be exchanged: $%.2f\n", exchange); 
    return 0; 
}