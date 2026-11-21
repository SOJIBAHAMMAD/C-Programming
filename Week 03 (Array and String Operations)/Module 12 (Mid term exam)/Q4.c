#include<stdio.h>
#include<string.h>
int main () {
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++) {
        char S[10001];
        scanf("%s",S);
        int len=strlen(S);
        int lowerCase=0,upperCase=0,digit=0;
        for(int i=0;i<len;i++) {
            if(S[i]>='a' && S[i]<='z') {
                lowerCase++;
            } else if(S[i]>='A' && S[i]<='Z') {
                upperCase++;
            } else {
                digit++;
            }
        }
        printf("%d %d %d\n",upperCase,lowerCase,digit);
    }
    return 0;
}