#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    int count1=0,count2=0;
    for(int i=1;i<=N;i++) {
        int x;
        scanf("%d",&x);
        if(x==0) {
            count1++;
        } else {
            count2++;
        }
    }
    printf("%d %d",count1,count2);
    return 0;
}