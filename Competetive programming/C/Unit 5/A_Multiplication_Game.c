#include <stdio.h>

int main() {

    long long n;
    double p = 1;

    printf("===== A MULTIPLICATION GAME =====\n\n");

    printf("Enter target number N: ");
    printf("\nExample: 162\n\n");

    scanf("%lld", &n);

    int stanTurn = 1;

    while(p < n) {

        if(stanTurn)
            p *= 9;   // Stan plays optimally
        else
            p *= 2;   // Ollie plays optimally

        stanTurn = !stanTurn;
    }

    if(!stanTurn)
        printf("\nWinner: Stan\n");
    else
        printf("\nWinner: Ollie\n");

    return 0;
}