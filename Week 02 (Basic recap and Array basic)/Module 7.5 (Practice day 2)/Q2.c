// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    int X;
    scanf("%d",&X);
    int count=0;
    for(int i=0;i<N;i++) {
        if(A[i]==X) {
            printf("%d",i);
            break;
        } else {
            count++;
        }
    }
    if(count==N) {
        printf("-1");
    }
    return 0;
}