// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    int year=N/365;
    printf("%d years\n",year);
    N=N%365;
    int month=N/30;
    printf("%d months\n",month);
    int days=N%30;
    printf("%d days\n",days);
    return 0;
}