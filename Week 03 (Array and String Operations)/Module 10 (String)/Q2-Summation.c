#include<stdio.h>
int main () {
    char S[1000001];
    scanf("%s",&S);
    int sum=0;
    for(int i=0;S[i]!='\0';i++) {
        sum+=S[i]-48; // sum+=S[i]-'0'; ASCII value of '0' is 48
    }
    printf("%d",sum);
    return 0;
}