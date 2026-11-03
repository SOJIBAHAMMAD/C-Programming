// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

// incomplete code

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main () {
    int T;
    scanf("%d",&T);
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    int smallPath=INT_MAX;
    int sum=0;
    for(int i=0;i<T;i++) {
        for(int j=0;j<N;j++) {
            sum+=(A[i]+A[j]+abs(j-i));
        }
        if(sum<smallPath) {
            smallPath=sum;
        }
    }
    printf("%d",sum);
    return 0;
}
