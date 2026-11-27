// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include<stdio.h>
void print() {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int min=0,mid=0,max=0;
    if(A>B) {
        max=A;
        if(B>C) {
            mid=B;
            min=C;
        } else {
            mid=C;
            min=B;
        }
    } else if(B>C) {
        max=B;
        if(C>A) {
            mid=C;
            min=A;
        } else {
            mid=A;
            min=C;
        }
    } else {
        max=C;
        if(A>B) {
            mid=A;
            min=B;
        } else {
            mid=B;
            min=A;
        }
    }
    printf("%d\n%d\n%d\n\n",min,mid,max);
    printf("%d\n%d\n%d",A,B,C);

}
int main () {
    print();
    return 0;
}