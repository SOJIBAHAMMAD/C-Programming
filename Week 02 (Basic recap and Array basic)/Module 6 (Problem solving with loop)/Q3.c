// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include<stdio.h>
int main () {
    int X;
    while(scanf("%d",&X)) {
        if(X==1999) {
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }
    return 0;
}