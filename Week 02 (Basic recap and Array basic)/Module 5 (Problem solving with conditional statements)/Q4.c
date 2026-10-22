// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include<stdio.h>
int main () {
    char X;
    scanf("%c",&X);
    if(X>='a' && X<='z') {
        X=X-32;
        printf("%c",X);
    } else if(X>='A' && X<='Z') {
        X=X+32;
        printf("%c",X);
    } else {
        printf("Not an elphabet character");
    }
    
    return 0;
}