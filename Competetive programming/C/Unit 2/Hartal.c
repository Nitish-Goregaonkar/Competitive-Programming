#include <stdio.h>
int main() {
    int days, parties;
    printf("Enter total number of days: ");
    scanf("%d", &days);

    printf("Enter number of political parties: ");
    scanf("%d", &parties);

    int h[20];
    printf("Enter hartal parameter for each party:\n");
    for(int i = 0; i < parties; i++)
        scanf("%d", &h[i]);
    int lostDays = 0;
    for(int day = 1; day <= days; day++) {

        // Friday and Saturday are holidays
        if(day % 7 == 6 || day % 7 == 0)
            continue;

        for(int i = 0; i < parties; i++) {

            if(day % h[i] == 0) {
                lostDays++;
                break;
            }
        }
    }

    printf("\nLost Working Days = %d\n", lostDays);

    return 0;
}