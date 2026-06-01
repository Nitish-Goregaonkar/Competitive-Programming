#include <stdio.h>

int main() {

    int s1, s2, s3;
    int a, b, c;

    printf("===== PAIRSUMONIOUS NUMBERS =====\n\n");

    printf("Enter three pair sums:\n");
    printf("Format:\n");
    printf("a+b  a+c  b+c\n\n");

    printf("Example:\n");
    printf("3 4 5\n\n");

    scanf("%d %d %d", &s1, &s2, &s3);

    a = (s1 + s2 - s3) / 2;
    b = s1 - a;
    c = s2 - a;

    printf("\nOriginal Numbers:\n");
    printf("%d %d %d\n", a, b, c);

    return 0;
}