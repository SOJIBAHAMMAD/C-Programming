// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    int nsp=N-1;
    int nst=1;
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=nsp;j++) {
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=nst;k++) {
            printf("*");
        }
        nst+=2;
        printf("\n");
    }
    int nsp1=0;
    int nst2=N+(N-1);
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=nsp1;j++) {
            printf(" ");
        }
        nsp1++;
        for(int k=1;k<=nst2;k++) {
            printf("*");
        }
        nst2-=2;
        printf("\n");
    }
    return 0;
}