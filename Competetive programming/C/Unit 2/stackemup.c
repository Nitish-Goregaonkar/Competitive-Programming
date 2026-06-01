#include <stdio.h>

int main() {

    int n;

    printf("Enter number of cards: ");
    scanf("%d", &n);

    int cards[100];

    printf("Enter card numbers:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &cards[i]);

    // Simple shuffle: reverse deck
    for(int i = 0; i < n/2; i++) {
        int temp = cards[i];
        cards[i] = cards[n-1-i];
        cards[n-1-i] = temp;
    }

    printf("\nCards after shuffle:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", cards[i]);

    return 0;
}