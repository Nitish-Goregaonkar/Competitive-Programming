#include <stdio.h>
#include <string.h>
int main() {
    char keyboard[] =
    "`1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";

    char text[200];

    printf("===== WERTYU =====\n\n");

    printf("Enter text:\n");
    printf("Example: O S, GOMR YPFSU?\n\n");

    fgets(text, sizeof(text), stdin);

    printf("\nDecoded Text:\n");

    for(int i = 0; text[i] != '\0'; i++) {

        if(text[i] == ' ') {
            printf(" ");
            continue;
        }

        for(int j = 0; keyboard[j] != '\0'; j++) {

            if(text[i] == keyboard[j]) {
                printf("%c", keyboard[j - 1]);
                break;
            }
        }
    }

    return 0;
}