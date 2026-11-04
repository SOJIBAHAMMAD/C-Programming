// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

#include<stdio.h>
#include<string.h>
int main () {
    char S[1001];
    char T[1001];
    scanf("%s",&S);
    scanf("%s",&T);
    int len1=strlen(S);
    int len2=strlen(T);
    printf("%d %d\n",len1,len2);
    printf("%s %s",S,T);
    return 0;
}