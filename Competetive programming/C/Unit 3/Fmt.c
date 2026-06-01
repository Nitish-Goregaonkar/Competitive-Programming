#include <stdio.h>
#include <string.h>

int main() {

    char text[1000];
    int len, count = 0;

    printf("===== FMT (TEXT FORMATTER) =====\n\n");

    printf("Enter a paragraph:\n");
    printf("Example: This is a sample paragraph for testing the formatter.\n\n");

    fgets(text, sizeof(text), stdin);

    len = strlen(text);

    printf("\nFormatted Output:\n\n");

    for(int i = 0; i < len; i++) {

        printf("%c", text[i]);
        count++;

        if(count >= 50 && text[i] == ' ') {
            printf("\n");
            count = 0;
        }
    }

    return 0;
}