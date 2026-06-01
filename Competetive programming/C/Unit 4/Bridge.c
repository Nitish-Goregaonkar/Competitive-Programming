#include <stdio.h>

int main() {

    int a, b, c, d;

    printf("===== BRIDGE PROBLEM =====\n\n");

    printf("Enter crossing times in ascending order.\n");
    printf("Example: 1 2 5 10\n\n");

    printf("Person 1 time: ");
    scanf("%d", &a);

    printf("Person 2 time: ");
    scanf("%d", &b);

    printf("Person 3 time: ");
    scanf("%d", &c);

    printf("Person 4 time: ");
    scanf("%d", &d);

    int method1 = a + 2*b + d;
    int method2 = 2*a + c + d;

    int answer;

    if(method1 < method2)
        answer = method1;
    else
        answer = method2;

    printf("\nMinimum Time Required = %d\n", answer);

    return 0;
}