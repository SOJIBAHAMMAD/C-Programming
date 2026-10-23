// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include<stdio.h>
int main () {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int highest,middle,lowest;
    if(A>=B && A>=C) {
        highest=A;
        if(B>=C) {
            middle=B;
            lowest=C;
        } else {
            middle=C;
            lowest=B;
        }
    } else if(B>=A && B>=C) {
        highest=B;
        if(A>=C) {
            middle=A;
            lowest=C;
        } else {
            middle=C;
            lowest=A;
        }
    } else {
        highest=C;
        if(A>=B) {
            middle=A;
            lowest=B;
        } else {
            middle=B;
            lowest=A;
        }
    }
    printf("%d\n%d\n%d\n",lowest,middle,highest);
    printf("\n%d\n%d\n%d\n",A,B,C);
    return 0;
}