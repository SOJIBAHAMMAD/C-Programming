#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a=65;
    for(int i=1;i<=n;i++) {
        for(int j=65;j<=a;j++) {
            printf("%c ",j);
        }
        printf("\n");
        a++;
    }
    return 0;
}