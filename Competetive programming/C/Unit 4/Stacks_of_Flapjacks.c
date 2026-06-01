#include <stdio.h>

void flip(int arr[], int k) {

    int start = 0;

    while(start < k) {

        int temp = arr[start];
        arr[start] = arr[k];
        arr[k] = temp;

        start++;
        k--;
    }
}

int main() {

    int n;

    printf("===== STACKS OF FLAPJACKS =====\n\n");

    printf("Enter number of pancakes: ");
    scanf("%d", &n);

    int arr[100];

    printf("\nEnter pancake sizes from top to bottom:\n");
    printf("Example: 1 5 3 4 2\n\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Stack:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for(int curr = n - 1; curr > 0; curr--) {

        int maxIndex = 0;

        for(int i = 1; i <= curr; i++) {

            if(arr[i] > arr[maxIndex])
                maxIndex = i;
        }

        if(maxIndex != curr) {

            if(maxIndex != 0) {

                flip(arr, maxIndex);

                printf("\nFlip at position %d", maxIndex + 1);
            }

            flip(arr, curr);

            printf("\nFlip at position %d", curr + 1);
        }
    }

    printf("\n\nSorted Pancakes:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}