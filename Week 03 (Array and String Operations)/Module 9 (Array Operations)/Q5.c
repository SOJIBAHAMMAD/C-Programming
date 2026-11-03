// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include<stdio.h>
#include<stdbool.h>
int main () {
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    bool flag=true;
    for(int i=0;i<N/2;i++) {
        if(A[i]!=A[N-1-i]) {
            flag=false;
            break;
        }
    }
    if(flag) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}