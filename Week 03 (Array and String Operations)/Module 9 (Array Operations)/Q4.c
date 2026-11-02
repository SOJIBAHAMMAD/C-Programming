// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

#include<stdio.h>
#include<limits.h>
int main () {
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    int max=INT_MIN;
    int maxIdx=0;
    int min=INT_MAX;
    int minIdx=0;
    for(int i=0;i<N;i++) {
        if(A[i]>max) {
            max=A[i];
            maxIdx=i;
        }
    }
    for(int i=0;i<N;i++) {
        if(A[i]<min) {
            min=A[i];
            minIdx=i;
        }
    }
    int temp=A[minIdx];
    A[minIdx]=A[maxIdx];
    A[maxIdx]=temp;
    for(int i=0;i<N;i++) {
        printf("%d ",A[i]);
    }
    return 0;
}