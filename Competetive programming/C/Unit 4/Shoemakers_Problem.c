#include <stdio.h>

struct Job {
    int id;
    int time;
    int fine;
};

int main() {

    int n;

    printf("===== SHOEMAKER'S PROBLEM =====\n\n");

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    struct Job jobs[100];

    printf("\nEnter Time and Fine for each job.\n");
    printf("Example: Time=3 Fine=4\n\n");

    for(int i = 0; i < n; i++) {

        jobs[i].id = i + 1;

        printf("Job %d Time: ", i + 1);
        scanf("%d", &jobs[i].time);

        printf("Job %d Fine: ", i + 1);
        scanf("%d", &jobs[i].fine);
    }

    // Sort by Fine/Time ratio
    for(int i = 0; i < n - 1; i++) {

        for(int j = i + 1; j < n; j++) {

            if(jobs[i].fine * jobs[j].time <
               jobs[j].fine * jobs[i].time) {

                struct Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    printf("\nOptimal Job Order:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", jobs[i].id);
    }

    printf("\n");

    return 0;
}