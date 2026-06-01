#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    int diff[100] = {0};

    printf("Enter the numbers:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n - 1; i++) {

        int d = abs(arr[i] - arr[i + 1]);

        if(d >= 1 && d <= n - 1)
            diff[d] = 1;
    }

    int jolly = 1;

    for(int i = 1; i <= n - 1; i++) {

        if(diff[i] == 0) {
            jolly = 0;
            break;
        }
    }

    if(jolly)
        printf("\nJolly Jumper\n");
    else
        printf("\nNot Jolly\n");

    return 0;
}