// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++) {
        for(int j=N;j>=i;j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
