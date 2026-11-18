// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C


#include<stdio.h>
#include<stdbool.h>
int main () {
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int i=0;
    while(true) {
        if(a[i]=='\0' && b[i]=='\0') {
            printf("Strings are equal");
            break;
        } else if(a[i]=='\0') {
            printf("A is smallest");
            break;
        } else if(b[i]=='\0') {
            printf("B is smallest");
            break;
        } else if(a[i]<b[i]) {
            printf("A is samllest");
            break;
        } else if(a[i]>b[i]) {
            printf("B is smallest");
            break;
        } else if(a[i]==b[i]) {
            i++;
        }
    }
    return 0;
}