/* Take an array from input and print all the even numbers of that array.
Take an array from input and count how many odd numbers are present in that array.
Take an array from input and print the maximum value of that array.
Take an array from input and print the minimum value of that array.
*/

#include<stdio.h>
#include<limits.h>
int main () {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int count=0;
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++) {
        if(arr[i]%2==0) {
            printf("%d ",arr[i]);
        }
        if(arr[i]%2!=0) {
            count++;
        } 
        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[i]<min) {
            min=arr[i];
        }
    }
    printf("\nToatl odd number %d",count);
    printf("\nMaximum number is %d",max);
    printf("\nMinimum number is %d",min);
    return 0;
}
