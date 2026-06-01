#include <stdio.h>

int main() {

    int m, n;

    printf("===== STERN-BROCOT NUMBER SYSTEM =====\n\n");

    printf("Enter numerator and denominator:\n");
    printf("Example: 5 2\n\n");

    scanf("%d %d", &m, &n);

    int leftNum = 0, leftDen = 1;
    int rightNum = 1, rightDen = 0;
    int midNum = 1, midDen = 1;

    printf("\nPath: ");

    while (!(midNum == m && midDen == n)) {

        if ((long long)m * midDen <
            (long long)n * midNum) {

            printf("L");

            rightNum = midNum;
            rightDen = midDen;

            midNum = leftNum + rightNum;
            midDen = leftDen + rightDen;
        }
        else {

            printf("R");

            leftNum = midNum;
            leftDen = midDen;

            midNum = leftNum + rightNum;
            midDen = leftDen + rightDen;
        }
    }

    printf("\n");

    return 0;
}