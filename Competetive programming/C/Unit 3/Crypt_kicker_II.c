#include <stdio.h>
#include <string.h>
int main() {
    char encrypted[200];
    char key[] = "the quick brown fox jumps over the lazy dog";
    printf("Enter encrypted sentence:\n");
    fgets(encrypted, sizeof(encrypted), stdin);
    if(strlen(encrypted) - 1 != strlen(key)) {
        printf("No solution.\n");
        return 0;
    }
    char map[256] = {0};
    for(int i = 0; key[i]; i++) {
        if(key[i] == ' ') {
            if(encrypted[i] != ' ') {
                printf("No solution.\n");
                return 0;
            }
        }
        else {
            map[(int)encrypted[i]] = key[i];
        }
    }
    printf("\nDecoded Message:\n");
    for(int i = 0; encrypted[i]; i++) {

        if(encrypted[i] == ' ')
            printf(" ");
        else
            printf("%c", map[(int)encrypted[i]]);
    }

    return 0;
}