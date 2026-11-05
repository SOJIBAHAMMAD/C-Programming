// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include<stdio.h>
#include<string.h>
int main () {
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++) {
        char S[101];
        scanf("%s",&S);
        int len=strlen(S);
        if(len<=10) {
            printf("%s\n",S);
        } else {
            int count=0;
            for(int i=1;i<len-1;i++) {
                count++;
            }
            printf("%c%d%c\n",S[0],count,S[len-1]);
        }
    }
    return 0;
}