// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include<stdio.h>
int main () {
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++) {
        int N;
        scanf("%d",&N);
        if(N==0) {
            printf("0");
        }
        while(N!=0) {
            int last_digit=N%10;
            printf("%d ",last_digit);
            N=N/10;
        }
        printf("\n");
    }
    return 0;
}