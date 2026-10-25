// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include<stdio.h>
int main () {
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++) {
        int N;
        scanf("%d",&N);
        int factorial=1;
        for(int j=1;j<=N;j++) {
            factorial=factorial*j;
        }
        printf("%d\n",factorial);
   }   
    return 0;
}