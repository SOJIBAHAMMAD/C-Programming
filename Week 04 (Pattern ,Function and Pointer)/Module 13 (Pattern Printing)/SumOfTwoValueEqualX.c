#include<stdio.h>
#include<stdbool.h>
int main () {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    bool flag=false;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if((arr[i]+arr[j])==x) {
                flag=true;
            }
        }
    }
    if(flag==true) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}