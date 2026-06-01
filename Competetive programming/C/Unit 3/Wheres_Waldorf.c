#include <stdio.h>
#include <string.h>

int main() {

    int rows, cols;

    printf("===== WHERE'S WALDORF? =====\n\n");

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    char grid[20][20];

    printf("\nEnter the grid (one row at a time):\n");
    printf("Example:\n");
    printf("abcde\n");
    printf("fghij\n\n");

    for(int i = 0; i < rows; i++)
        scanf("%s", grid[i]);

    char word[20];

    printf("\nEnter word to search: ");
    scanf("%s", word);

    int found = 0;

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < cols; j++) {

            int k;

            for(k = 0; word[k] != '\0'; k++) {

                if(j + k >= cols || grid[i][j + k] != word[k])
                    break;
            }

            if(word[k] == '\0') {

                printf("\nWord found at Row %d Column %d\n", i + 1, j + 1);
                found = 1;
            }
        }
    }

    if(!found)
        printf("\nWord not found.\n");

    return 0;
}