#include<stdio.h>
#include<limits.h>
int main () {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    for(int i=0;i<N;i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    for(int i=0;i<N;i++) {
        arr[i]=max-arr[i];
    }
    for(int i=0;i<N;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}