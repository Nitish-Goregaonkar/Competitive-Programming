#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char correct[200], output[200];

    printf("Enter Correct Output: ");
    fgets(correct, sizeof(correct), stdin);

    printf("Enter User Output: ");
    fgets(output, sizeof(output), stdin);

    if(strcmp(correct, output) == 0) {
        printf("\nAccepted\n");
    }
    else {
        char num1[200] = "", num2[200] = "";
        int j = 0;

        for(int i = 0; correct[i]; i++)
            if(isdigit(correct[i]))
                num1[j++] = correct[i];

        j = 0;

        for(int i = 0; output[i]; i++)
            if(isdigit(output[i]))
                num2[j++] = output[i];

        if(strcmp(num1, num2) == 0)
            printf("\nPresentation Error\n");
        else
            printf("\nWrong Answer\n");
    }

    return 0;
}