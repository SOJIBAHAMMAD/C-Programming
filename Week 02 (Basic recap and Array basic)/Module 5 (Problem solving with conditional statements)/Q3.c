//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include<stdio.h>
int main () {
    int X;
    scanf("%d",&X);
    if(X>999 && X<10000) {
        X=X/1000;
        if(X%2==0) {
            printf("EVEN");
        } else {
            printf("ODD");
        }
    } else {
        X=X/10000;
        if(X%2==0) {
            printf("EVEN");
        } else {
            printf("ODD");
        }
    }
    return 0;
}