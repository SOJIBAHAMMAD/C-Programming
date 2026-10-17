// Take a number from user and check if its a positive or negative number.
#include<stdio.h>
int main () {
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if(a>=0) {
        printf("It's positive number\n");
    } else {
        printf("It's negative number\n");
    }
    return 0;
}