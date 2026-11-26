#include<stdio.h>
// For swaping
void swap_it(int* p1,int* p2) {
    int temp= *p1;
    *p1=*p2;
    *p2=temp;
}

// For count odd
int count_odd(int arr[],int n) {
    int count1=0;
    for(int i=0;i<n;i++) {
        if(arr[i]%2!=0) {
            count1++;
        }
    }
    return count1;
}

// For count len of string
int my_len(char S[]) {
    int count=0;
    for(int i=0;S[i]!='\0';i++) {
        count++;
    }
    return count;
}


// For absulate value
int my_abs(int n) {
    if(n<0) {
        n=n*-1;
    }
    return n;
}
int main () { 
    int n;
    scanf("%d",&n);
    int res=my_abs(n); 
    printf("%d",res);
    char S[30];
    scanf("%s",S);
    int len=my_len(S);
    printf("%d",len);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int countOdd=count_odd(arr,n);
    printf("%d",countOdd);
    int x,y;
    scanf("%d %d",&x,&y);
    swap_it(&x,&y);
    printf("%d %d",x,y);
}
