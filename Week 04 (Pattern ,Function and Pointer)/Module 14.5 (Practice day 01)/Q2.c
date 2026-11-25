// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

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
    return 0;
}