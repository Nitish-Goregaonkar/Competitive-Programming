#include <stdio.h>

int main() {

    int dice[5];
    int freq[7] = {0};

    printf("Enter 5 dice values (1-6):\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &dice[i]);
        freq[dice[i]]++;
    }

    int yahtzee = 0, four = 0, three = 0, pair = 0;

    for(int i = 1; i <= 6; i++) {

        if(freq[i] == 5)
            yahtzee = 1;

        if(freq[i] == 4)
            four = 1;

        if(freq[i] == 3)
            three = 1;

        if(freq[i] == 2)
            pair = 1;
    }

    if(yahtzee)
        printf("\nYahtzee!\n");

    else if(four)
        printf("\nFour of a Kind!\n");

    else if(three && pair)
        printf("\nFull House!\n");

    else if(three)
        printf("\nThree of a Kind!\n");

    else
        printf("\nNo Special Combination.\n");

    return 0;
}