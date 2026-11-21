#include<stdio.h>
#include<string.h>
int main () {
    char S[10001];
    scanf("%s",S);
    int len=strlen(S);
    int feq[26];
    for(int i=0;i<26;i++) {
        feq[i]=0;
    }
    for(int i=0;i<len;i++) {
        int val=S[i];
        feq[val-'a']++;        // This line maps each lowercase letter ('a' to 'z') to an index between 0 and 25.              
    }
    for(int i=0;i<26;i++) {
        if(feq[i]!=0) {
            printf("%c - %d\n",i+'a',feq[i]);
        }
    }
    return 0;
}