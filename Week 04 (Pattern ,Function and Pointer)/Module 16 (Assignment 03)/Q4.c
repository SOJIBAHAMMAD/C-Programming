#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int is_palindrome(char S[]) {
    int len=strlen(S);
    bool flag=true;
    for(int i=0;i<len/2;i++) {
        if(S[i]!=S[len-1-i]) {
            flag=false;
            break;
        }
    }
    if(flag==true) {
        return 1;
    } else {
        return 0;
    }
}
int main () {
    char S[1001];
    scanf("%s",S);
    int res=is_palindrome(S);
    if(res==1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}