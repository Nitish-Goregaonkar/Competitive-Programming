#include <stdio.h>
#include <string.h>

struct Team {
    char name[50];
    int points;
    int wins;
    int draws;
    int losses;
    int goalsFor;
    int goalsAgainst;
};

int main() {

    int n;

    printf("===== FOOTBALL TOURNAMENT =====\n\n");

    printf("Enter number of teams: ");
    scanf("%d", &n);

    struct Team teams[20];

    for(int i = 0; i < n; i++) {

        printf("Enter Team %d Name: ", i + 1);
        scanf("%s", teams[i].name);

        teams[i].points = 0;
        teams[i].wins = 0;
        teams[i].draws = 0;
        teams[i].losses = 0;
        teams[i].goalsFor = 0;
        teams[i].goalsAgainst = 0;
    }

    int matches;

    printf("\nEnter number of matches played: ");
    scanf("%d", &matches);

    printf("\nEnter match details:\n");
    printf("Format:\n");
    printf("Team1 Team2 Goals1 Goals2\n");
    printf("Example:\n");
    printf("Brazil Argentina 2 1\n\n");

    for(int i = 0; i < matches; i++) {

        char t1[50], t2[50];
        int g1, g2;

        scanf("%s %s %d %d", t1, t2, &g1, &g2);

        int a = -1, b = -1;

        for(int j = 0; j < n; j++) {

            if(strcmp(teams[j].name, t1) == 0)
                a = j;

            if(strcmp(teams[j].name, t2) == 0)
                b = j;
        }

        teams[a].goalsFor += g1;
        teams[a].goalsAgainst += g2;

        teams[b].goalsFor += g2;
        teams[b].goalsAgainst += g1;

        if(g1 > g2) {

            teams[a].points += 3;
            teams[a].wins++;
            teams[b].losses++;
        }
        else if(g2 > g1) {

            teams[b].points += 3;
            teams[b].wins++;
            teams[a].losses++;
        }
        else {

            teams[a].points++;
            teams[b].points++;

            teams[a].draws++;
            teams[b].draws++;
        }
    }

    printf("\n===== FINAL STANDINGS =====\n\n");

    for(int i = 0; i < n; i++) {

        printf("%s\n", teams[i].name);
        printf("Points : %d\n", teams[i].points);
        printf("Wins   : %d\n", teams[i].wins);
        printf("Draws  : %d\n", teams[i].draws);
        printf("Losses : %d\n", teams[i].losses);
        printf("Goal Difference : %d\n\n",
               teams[i].goalsFor - teams[i].goalsAgainst);
    }

    return 0;
}