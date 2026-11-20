#include<stdio.h>
#include<string.h>
int main () {
    char S[10001];
    scanf("%s",S);
    int len=strlen(S);
    int feq[26]={0};
    for(int i=0;i<len;i++) {
        int val=S[i]-97;
        feq[val]++;
    }
    for(int i=0;i<26;i++) {
        if(feq[i]!=0) {
            printf("%c : %d\n",i+97,feq[i]);
        }
    }
    return 0;
}