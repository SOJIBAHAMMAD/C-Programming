#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int numOfHash=1;
    int numOfSpace=N-1;
    int numOfMinus=1;
    for (int i=1;i<=N;i++) {
        for (int s=1;s<=numOfSpace;s++) {
            printf(" ");
        }
        numOfSpace--;
        if (i%2!=0) {
            for (int j=1;j<=numOfHash;j++) {
                printf("#");
            }
        } else {
            for (int k=1;k<=numOfMinus;k++) {
                printf("-");
            }
        }
        printf("\n");
        numOfHash +=2;
        numOfMinus +=2;
    }

    numOfSpace +=2;
    numOfHash -=4;
    numOfMinus -=4;
    for (int i=N;i>=1;i--) {
        for (int s=1;s<=numOfSpace;s++) {
            printf(" ");
        }
        numOfSpace++;
        if (i%2==0) {
            for (int j=1;j<=numOfHash;j++) {
                printf("#");
            }
        } else {
            for (int k=1;k<=numOfMinus;k++) {
                printf("-");
            }
        }
        printf("\n");
        numOfHash -=2;
        numOfMinus -=2;
    }
    return 0;
}