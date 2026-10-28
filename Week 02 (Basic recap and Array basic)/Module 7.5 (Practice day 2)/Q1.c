// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include<stdio.h>
#include<stdlib.h>
int main () {
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    long long int sum=0;
    for(int i=0;i<N;i++) {
        sum+=A[i];
    }
    printf("%lld",abs(sum));
    return 0;
}
