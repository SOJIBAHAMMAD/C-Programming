// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

#include<stdio.h>
#include<limits.h>
int main () {
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    int min=INT_MAX;
    int pos=0;
    for(int i=0;i<N;i++) {
        if(A[i]<min) {
            min=A[i];
            pos=i;
        }
    }
    printf("%d %d",min,pos+1);
    return 0;
}