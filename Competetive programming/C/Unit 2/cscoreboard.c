#include <stdio.h>

int main() {

    int teams, i;
    int solved[100], penalty[100];

    printf("Enter number of teams: ");
    scanf("%d", &teams);

    for(i = 0; i < teams; i++) {

        printf("\nTeam %d\n", i + 1);

        printf("Problems Solved: ");
        scanf("%d", &solved[i]);

        printf("Penalty Time: ");
        scanf("%d", &penalty[i]);
    }

    printf("\n--- Contest Scoreboard ---\n");

    for(i = 0; i < teams; i++) {

        printf("Team %d -> Solved: %d  Penalty: %d\n",
               i + 1, solved[i], penalty[i]);
    }

    return 0;
}