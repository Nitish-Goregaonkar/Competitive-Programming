#include <stdio.h>
#include <string.h>

char candidates[25][100];
int ballots[1005][25];
int active[25];
int votes[25];

int main() {

    int t;
    scanf("%d\n\n", &t);

    while(t--) {

        int n;
        scanf("%d\n", &n);

        for(int i=0;i<n;i++)
            fgets(candidates[i],100,stdin);

        for(int i=0;i<n;i++)
            candidates[i][strcspn(candidates[i],"\n")] = 0;

        int bcount=0;

        char line[200];

        while(fgets(line,200,stdin) && strcmp(line,"\n")!=0) {

            int idx=0, num=0;

            for(int i=0;;i++) {

                if(line[i]==' ' || line[i]=='\n' || line[i]=='\0') {

                    ballots[bcount][idx++] = num-1;
                    num=0;

                    if(line[i]=='\n' || line[i]=='\0')
                        break;
                }

                else {
                    num = num*10 + (line[i]-'0');
                }
            }

            bcount++;
        }

        for(int i=0;i<n;i++)
            active[i]=1;

        while(1) {

            memset(votes,0,sizeof(votes));

            for(int i=0;i<bcount;i++) {

                for(int j=0;j<n;j++) {

                    int c = ballots[i][j];

                    if(active[c]) {
                        votes[c]++;
                        break;
                    }
                }
            }

            int mx=0,mn=100000;

            for(int i=0;i<n;i++) {

                if(active[i]) {

                    if(votes[i]>mx)
                        mx=votes[i];

                    if(votes[i]<mn)
                        mn=votes[i];
                }
            }

            if(mx > bcount/2) {

                for(int i=0;i<n;i++) {
                    if(votes[i]==mx)
                        printf("%s\n",candidates[i]);
                }

                break;
            }

            if(mx==mn) {

                for(int i=0;i<n;i++) {
                    if(active[i])
                        printf("%s\n",candidates[i]);
                }

                break;
            }

            for(int i=0;i<n;i++) {
                if(votes[i]==mn)
                    active[i]=0;
            }
        }

        if(t)
            printf("\n");
    }

    return 0;
}
// 3
// Alice
// Bob
// Charlie
// 5
// 1 2 3
// 2 1 3
// 2 3 1
// 3 2 1
// 1 3 2