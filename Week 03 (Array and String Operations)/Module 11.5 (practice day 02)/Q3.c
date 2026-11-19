// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include<stdio.h>
#include<string.h>
int main () {
    int N;
    scanf("%d",&N);
    char arr[N+1];
    scanf("%s",arr);
    int len=strlen(arr);
    int sum=0;
    for(int i=0;arr[i]!='\0';i++) {
        sum=sum+arr[i]-48;
    }
    printf("%d",sum);
    return 0;
}