// https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm86d15s50092r001qeu2gb0t?language=c_103

#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    for(int i=N;i>=1;i--) {
        for(int j=N-i;j>N+1-i;j--) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
// incomplete