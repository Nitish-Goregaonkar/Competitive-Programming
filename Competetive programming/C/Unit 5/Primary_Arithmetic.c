#include <stdio.h>
int main() {
    long long num1, num2;
    printf("===== PRIMARY ARITHMETIC =====\n\n");
    printf("Enter First Number:\n");
    printf("Example: 123\n");
    scanf("%lld", &num1);
    printf("\nEnter Second Number:\n");
    printf("Example: 594\n");
    scanf("%lld", &num2);
    int carry = 0;
    int carryCount = 0;
    while(num1 > 0 || num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;
        int sum = digit1 + digit2 + carry;
        if(sum >= 10) {
            carry = 1;
            carryCount++;
        }
        else {
            carry = 0;
        }
        num1 /= 10;
        num2 /= 10;
    }
    if(carryCount == 0)
        printf("\nNo carry operation.\n");
    else if(carryCount == 1)
        printf("\n1 carry operation.\n");
    else
        printf("\n%d carry operations.\n", carryCount);

    return 0;
}