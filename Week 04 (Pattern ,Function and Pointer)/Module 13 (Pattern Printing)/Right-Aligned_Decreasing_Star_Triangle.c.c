#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int nst=n;
    int nsp=0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=nsp;j++) {
            printf(" ");
        }
        nsp++;
        for(int j=1;j<=nst;j++) {
            printf("*");
        }
        printf("\n");
        nst--;
    }
    return 0;
}