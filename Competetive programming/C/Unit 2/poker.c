#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int isFlush(char suit[]) {
    for (int i = 1; i < 5; i++)
        if (suit[i] != suit[0])
            return 0;
    return 1;
}

int isStraight(int rank[]) {
    for (int i = 0; i < 4; i++)
        if (rank[i] + 1 != rank[i+1])
            return 0;
    return 1;
}

int main() {
    int rank[5];
    char suit[5];

    printf("Enter 5 cards (rank suit), e.g. 10 H:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d %c", &rank[i], &suit[i]);
    }

    qsort(rank, 5, sizeof(int), compare);

    int flush = isFlush(suit);
    int straight = isStraight(rank);

    int count[15] = {0};
    for (int i = 0; i < 5; i++)
        count[rank[i]]++;

    int pairs = 0, three = 0, four = 0;

    for (int i = 1; i <= 13; i++) {
        if (count[i] == 2) pairs++;
        if (count[i] == 3) three++;
        if (count[i] == 4) four++;
    }

    if (straight && flush)
        printf("Straight Flush\n");
    else if (four)
        printf("Four of a Kind\n");
    else if (three && pairs)
        printf("Full House\n");
    else if (flush)
        printf("Flush\n");
    else if (straight)
        printf("Straight\n");
    else if (three)
        printf("Three of a Kind\n");
    else if (pairs == 2)
        printf("Two Pair\n");
    else if (pairs == 1)
        printf("One Pair\n");
    else
        printf("High Card\n");

    return 0;
}