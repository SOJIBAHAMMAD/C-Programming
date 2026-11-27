#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int numOfHash=1;
    int numOfSpace=N-1;
    int numOfMinus=1;
    for (int i=1;i<=N;i++) {
        for (int j=1;j<=numOfSpace;j++) {
            printf(" ");
        }
        numOfSpace--;
        if (i%2!=0) {
            for (int k=1;k<=numOfHash;k++) {
                printf("#");
            }
        }
        else {
            for (int l=1;l<=numOfMinus;l++) {
                printf("-");
            }
        }
        numOfHash += 2;
        numOfMinus += 2;
        printf("\n");
    }

    numOfSpace+=2;
    numOfHash-=4;
    numOfMinus-=4;
    for (int i=1;i<N;i++) {
        for (int j=1;j<=numOfSpace;j++) {
            printf(" ");
        }
        numOfSpace++;
        if(i%2==0) {
            for(int k=1;k<=numOfMinus;k++) {
                printf("-");
            }
        } else {
            for(int l=1;l<=numOfHash;l++) {
                printf("#");
            }
        }
        numOfHash -= 2;
        numOfMinus -= 2;
        printf("\n");
    }
    return 0;
}
