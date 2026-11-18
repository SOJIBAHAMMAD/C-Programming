#include<stdio.h>
#include<string.h>
int main () {
    char A[101],B[101];
    scanf("%s %s",&A,&B);
    int lenOfA=strlen(A);
    int lenOfB=strlen(B);
    for(int i=0;i<=lenOfB;i++) {
        A[i+lenOfA]=B[i];
    }
    printf("%s %s",A,B);
    return 0;
}