#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    int num_space=N-1;
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=num_space;j++) {
            printf(" ");
        }
        num_space--;
        for(int k=i;k>=1;k--) {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}