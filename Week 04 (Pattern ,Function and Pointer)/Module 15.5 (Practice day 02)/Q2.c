// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include<stdio.h>
void print(int N) {
    for(int i=1;i<=N;i++) {
        printf("%d",i);
        if(i!=N) {
            printf(" ");
        }
    }
}
int main () {
    int N;
    scanf("%d",&N);
    print(N);
    return 0;
}