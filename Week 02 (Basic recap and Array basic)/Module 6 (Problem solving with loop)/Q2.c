// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    int count1=0,count2=0,count3=0,count4=0;
    for(int i=0;i<N;i++) {
        int x;
        scanf("%d",&x);
        if(x%2==0) {
            count1++;
        } else if(x%2!=0) {
            count2++;
        }
        if(x>0) {
            count3++;
        }else if(x<0) {
            count4++;
        } 
    }
    printf("Even: %d\n",count1);
    printf("Odd: %d\n",count2);
    printf("Positive: %d\n",count3);
    printf("Negative: %d\n",count4);
    return 0;
}