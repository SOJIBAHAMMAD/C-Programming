// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include<stdio.h>
int main () {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d;
    scanf("%d",&d);
    if(a+b-c==d) {
        printf("YES");
    } else if(a+b*c==d) {
        printf("YES");
    } else if(a-b+c==d) {
        printf("YES");
    } else if(a-b*c==d) {
        printf("YES");
    } else if(a*b+c==d) {
        printf("YES");
    } else if(a*b-c==d) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}