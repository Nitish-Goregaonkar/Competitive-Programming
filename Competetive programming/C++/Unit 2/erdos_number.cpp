#include <iostream>
using namespace std;

int main() {

    int n, m;

    cout << "Enter number of authors: ";
    cin >> n;

    int graph[20][20] = {0};

    cout << "Enter number of collaborations: ";
    cin >> m;

    cout << "\nEnter collaboration pairs:\n";

    for(int i = 0; i < m; i++) {

        int a, b;
        cin >> a >> b;

        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    int erdos[20];
    int queue[20];

    for(int i = 0; i < n; i++)
        erdos[i] = -1;

    int front = 0, rear = 0;

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

    cout << "\nErdos Numbers:\n";

    for(int i = 0; i < n; i++)
        cout << "Author " << i << " -> " << erdos[i] << endl;

    return 0;
}