#include <stdio.h>

int main() {

    int rate;
    int enterKm, exitKm;

    printf("===== CDVII PARKING BILL =====\n\n");

    printf("Enter charge rate per kilometer:\n");
    printf("Example: 2\n");
    scanf("%d", &rate);

    printf("\nEnter kilometer reading at entry:\n");
    printf("Example: 100\n");
    scanf("%d", &enterKm);

    printf("\nEnter kilometer reading at exit:\n");
    printf("Example: 250\n");
    scanf("%d", &exitKm);

    int distance = exitKm - enterKm;
    int bill = distance * rate;

    printf("\nDistance Travelled = %d km\n", distance);
    printf("Total Bill = %d\n", bill);

    return 0;
}