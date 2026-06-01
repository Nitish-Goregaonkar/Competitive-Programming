#include <stdio.h>
#include <string.h>

int main() {

    char word1[50], word2[50];

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    if(strlen(word1) != strlen(word2)) {
        printf("\nNot Doublets (different lengths)\n");
        return 0;
    }

    int diff = 0;

    for(int i = 0; word1[i] != '\0'; i++) {
        if(word1[i] != word2[i])
            diff++;
    }

    if(diff == 1)
        printf("\nDoublets\n");
    else
        printf("\nNot Doublets\n");

    return 0;
}