// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main () {
    char S[1001];
    scanf("%s",&S);
    int len=strlen(S);
    bool flag=true;
    for(int i=0;i<len/2;i++) {
        if(S[i] != S[len-1-i]) {
            flag=false;
            break;
        }
    }
    if(flag==true) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}