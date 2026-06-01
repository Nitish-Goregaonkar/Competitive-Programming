#include <stdio.h>

int main() {

    int n, m;

    printf("Enter number of authors: ");
    scanf("%d", &n);

    int graph[20][20] = {0};

    printf("Enter number of collaborations: ");
    scanf("%d", &m);

    printf("\nEnter pairs of authors who collaborated:\n");

    for(int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    int erdos[20];
    int queue[20];
    int front = 0, rear = 0;

    for(int i = 0; i < n; i++)
        erdos[i] = -1;

    erdos[0] = 0; // Paul Erdos
    queue[rear++] = 0;

    while(front < rear) {

        int current = queue[front++];

        for(int i = 0; i < n; i++) {

            if(graph[current][i] == 1 && erdos[i] == -1) {

                erdos[i] = erdos[current] + 1;
                queue[rear++] = i;
            }
        }
    }

    printf("\nErdos Numbers:\n");

    for(int i = 0; i < n; i++)
        printf("Author %d -> %d\n", i, erdos[i]);

    return 0;
}