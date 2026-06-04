#include <stdio.h>
int main() {
    int n;
    printf("===== AUSTRALIAN VOTING =====\n\n");
    printf("Enter number of candidates: ");
    scanf("%d", &n);
    char names[20][50];
    int votes[20] = {0};
    for(int i = 0; i < n; i++) {
        printf("\nEnter Candidate %d Name: ", i + 1);
        scanf("%s", names[i]);
    }
    int voters;
    printf("\nEnter number of voters: ");
    scanf("%d", &voters);
    printf("\nCandidate List:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
    printf("\nNow enter vote numbers.\n");
    printf("Example: Enter 1 to vote for Candidate 1.\n\n");
    for(int i = 0; i < voters; i++) {
        int choice;
        printf("Voter %d Vote: ", i + 1);
        scanf("%d", &choice);
        if(choice >= 1 && choice <= n)
            votes[choice - 1]++;
    }
    int winner = 0;
    for(int i = 1; i < n; i++) {
        if(votes[i] > votes[winner])
            winner = i;
    }
    printf("\n===== RESULT =====\n");
    for(int i = 0; i < n; i++) {
        printf("%s = %d votes\n",
               names[i],
               votes[i]);
    }
    printf("\nWinner = %s\n",
           names[winner]);
    return 0;
}