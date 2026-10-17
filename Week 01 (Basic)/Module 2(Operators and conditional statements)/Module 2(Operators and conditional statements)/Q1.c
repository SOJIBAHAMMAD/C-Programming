// Take a number from user and check if its a even number or odd number.
#include<stdio.h>
int main () {
    long long int a;
    printf("Enter a number :");
    scanf("%lld",&a);
    if(a%2==0) {
        printf("It's even number\n");
    } else {
        printf("It's odd number\n");
    }
    return 0;
}