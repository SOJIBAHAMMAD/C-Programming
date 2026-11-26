// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

#include<stdio.h>
#include<limits.h>
void min_max(int A[],int N) {
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<N;i++) {
        if(A[i]>max) {
            max=A[i];
        }
        if(A[i]<min) {
            min=A[i];
        }
    }
    printf("%d %d",min,max);
}    
int main () {
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    min_max(A,N);
    return 0;
}