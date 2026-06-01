#include <stdio.h>
#include <string.h>

int main() {

    char fragment1[100];
    char fragment2[100];
    char original[200];

    printf("===== FILE FRAGMENTATION =====\n\n");

    printf("Enter First Fragment:\n");
    printf("Example: HELLO\n");
    scanf("%s", fragment1);

    printf("\nEnter Second Fragment:\n");
    printf("Example: WORLD\n");
    scanf("%s", fragment2);

    strcpy(original, fragment1);
    strcat(original, fragment2);

    printf("\nOriginal File Reconstructed:\n");
    printf("%s\n", original);

    return 0;
}