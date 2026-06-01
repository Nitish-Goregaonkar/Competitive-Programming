#include <stdio.h>

int main() {

    int n;

    printf("===== LONGEST NAP =====\n\n");

    printf("Enter number of appointments: ");
    scanf("%d", &n);

    int start[100], end[100];

    printf("\nEnter appointments in 24-hour format.\n");
    printf("Example: 10 11 (means 10:00 AM to 11:00 AM)\n\n");

    for(int i = 0; i < n; i++) {

        printf("Appointment %d Start Hour: ", i + 1);
        scanf("%d", &start[i]);

        printf("Appointment %d End Hour: ", i + 1);
        scanf("%d", &end[i]);
    }

    int longest = start[0] - 10; // Office starts at 10

    for(int i = 0; i < n - 1; i++) {

        int gap = start[i + 1] - end[i];

        if(gap > longest)
            longest = gap;
    }

    int lastGap = 18 - end[n - 1]; // Office ends at 18

    if(lastGap > longest)
        longest = lastGap;

    printf("\nLongest Nap Duration = %d hour(s)\n", longest);

    return 0;
}