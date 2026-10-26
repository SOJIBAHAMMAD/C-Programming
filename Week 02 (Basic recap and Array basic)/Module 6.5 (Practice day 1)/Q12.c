// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    int i;
    int x=N%10;
    N=N/10;
    int y=N%10;
    if(x%y==0 || y%x==0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}