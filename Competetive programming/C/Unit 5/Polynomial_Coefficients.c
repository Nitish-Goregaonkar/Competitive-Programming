#include <stdio.h>

long long factorial(int n) {

    long long fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {

    int n, k;

    printf("===== POLYNOMIAL COEFFICIENTS =====\n\n");

    printf("Enter value of n: ");
    printf("\nExample: 5\n");
    scanf("%d", &n);

    printf("\nEnter number of groups k: ");
    printf("\nExample: 3\n");
    scanf("%d", &k);

    int a[20];

    printf("\nEnter %d values whose sum = %d\n", k, n);
    printf("Example: 2 2 1\n\n");

    for(int i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }

    long long answer = factorial(n);

    for(int i = 0; i < k; i++) {
        answer /= factorial(a[i]);
    }

    printf("\nPolynomial Coefficient = %lld\n", answer);

    return 0;
}