#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int brr[m];
    for(int i=0;i<m;i++) {
        scanf("%d",&brr[i]);
    }

    int result[n+m];
    for(int i=0;i<n;i++) {
        result[i]=arr[i];
    }
    for(int i=0;i<m;i++) {
        result[i+n]=brr[i];
    }
    for(int i=0;i<n+m;i++) {
        printf("%d ",result[i]);
    }
    return 0;
}