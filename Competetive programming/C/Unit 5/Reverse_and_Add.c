#include <stdio.h>
long long reverseNumber(long long n) {
    long long rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int isPalindrome(long long n) {
    return n == reverseNumber(n);
}
int main() {
    long long num;
    printf("===== REVERSE AND ADD =====\n\n");
    printf("Enter a number:\n");
    printf("Example: 195\n\n");
    scanf("%lld", &num);
    int iterations = 0;
    while(!isPalindrome(num)) {

        long long rev = reverseNumber(num);

        num = num + rev;

        iterations++;
    }

    printf("\nPalindrome Found = %lld\n", num);
    printf("Number of Iterations = %d\n", iterations);

    return 0;
}