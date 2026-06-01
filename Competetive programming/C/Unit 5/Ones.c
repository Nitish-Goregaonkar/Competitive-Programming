#include <stdio.h>

int main() {

    int n;

    printf("===== ONES =====\n\n");

    printf("Enter a number N: ");
    printf("\nExample: 3\n\n");

    scanf("%d", &n);

    int count = 1;
    long long remainder = 1 % n;

    while(remainder != 0) {

        remainder = (remainder * 10 + 1) % n;
        count++;
    }

    printf("\nSmallest number of 1's required = %d\n", count);

    return 0;
}