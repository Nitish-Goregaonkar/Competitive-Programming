#include <stdio.h>
#include <math.h>
int main() {
    long long N;
    printf("===== THE ARCHEOLOGIST'S DILEMMA =====\n\n");
    printf("Enter the starting digits:\n");
    printf("Example: 12\n\n");
    scanf("%lld", &N);
    int exponent = 1;
    while (1) {
        double value = pow(2.0, exponent);
        char str[100];
        sprintf(str, "%.0f", value);

        long long prefix;
        sscanf(str, "%lld", &prefix);

        long long temp = prefix;

        while (temp > N)
            temp /= 10;

        if (temp == N) {
            printf("\nSmallest Exponent = %d\n", exponent);
            break;
        }

        exponent++;
    }

    return 0;
}