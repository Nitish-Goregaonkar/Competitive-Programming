#include <stdio.h>
#include <string.h>
int main() {
    char encrypted[100];
    char decrypted[100];
    printf("Enter encrypted text: ");
    fgets(encrypted, sizeof(encrypted), stdin);
    int i;

    for(i = 0; encrypted[i] != '\0'; i++) {

        if(encrypted[i] >= 'b' && encrypted[i] <= 'z')
            decrypted[i] = encrypted[i] - 1;

        else if(encrypted[i] >= 'B' && encrypted[i] <= 'Z')
            decrypted[i] = encrypted[i] - 1;

        else if(encrypted[i] == 'a')
            decrypted[i] = 'z';

        else if(encrypted[i] == 'A')
            decrypted[i] = 'Z';

        else
            decrypted[i] = encrypted[i];
    }

    decrypted[i] = '\0';

    printf("\nDecrypted Text: %s", decrypted);

    return 0;
}