// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include<stdio.h>
#include<limits.h>
int main () {
    int N;
    scanf("%d",&N);
    //int max=0;
    int max=INT_MIN;
    for(int i=0;i<N;i++) {
        int x;
        scanf("%d",&x);
        if(max<x) {
            max=x;
        }
    }
    printf("%d",max);
    return 0;
}