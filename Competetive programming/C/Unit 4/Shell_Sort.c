#include <stdio.h>
int main() {
    int n;
    printf("===== SHELL SORT =====\n\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("\nEnter %d numbers:\n", n);
    printf("Example: 45 23 67 12 89\n\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Shell Sort
    for(int gap = n / 2; gap > 0; gap /= 2) {
        for(int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for(j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    printf("\nSorted Array:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}