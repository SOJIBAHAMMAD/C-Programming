// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    if(N==1 || N<=0) {
        printf("-1");
    } else {
        for(int i=2;i<=N;i+=2) {
            printf("%d\n",i);
        }    
    }

    return 0;
}
