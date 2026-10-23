// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include<stdio.h>
int main () {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    // for minimum
    if(A<=B && A<=C) {
        printf("%d ",A);
    } else if(B<=A && B<=C) {
        printf("%d ",B);
    } else {
        printf("%d ",C);
    }

    // for maximum
    if(A>=B && A>=C) {
        printf("%d",A);
    } else if(B>=A && B>=C) {
        printf("%d",B);
    } else {
        printf("%d",C);
    }
    return 0;
}