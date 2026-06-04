#include <stdio.h>
int main() {
    int n;
    printf("===== VITO'S FAMILY =====\n\n");
    printf("Enter number of relatives: ");
    scanf("%d", &n);
    int street[100];
    printf("\nEnter street numbers of relatives:\n");
    printf("Example: 2 4 6 8 10\n\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &street[i]);
    }
    // Simple Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(street[j] > street[j + 1]) {
                int temp = street[j];
                street[j] = street[j + 1];
                street[j + 1] = temp;
            }
        }
    }
    int median = street[n / 2];
    int totalDistance = 0;
    for(int i = 0; i < n; i++) {
        int diff = street[i] - median;
        if(diff < 0)
            diff = -diff;
        totalDistance += diff;
    }
    printf("\nBest Street Number = %d\n", median);
    printf("Minimum Total Distance = %d\n", totalDistance);

    return 0;
}