#include<stdio.h>
int main () {
    int n;
    int arr[n];
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
    printf("Sum is %d",sum);
    return 0;
}