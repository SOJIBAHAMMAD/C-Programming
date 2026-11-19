// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include<stdio.h>
int main () {
    int N,M;
    scanf("%d %d",&N,&M);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    int feq[M+1];
    for(int i=1;i<=M;i++) {
        feq[i]=0;
    }
    for(int i=0;i<N;i++) {
        int val=A[i];
        feq[val]++;
    }
    for(int i=1;i<=M;i++) {
        printf("%d\n",feq[i]);
    }
    return 0;
}