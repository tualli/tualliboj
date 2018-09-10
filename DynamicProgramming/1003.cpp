#include <stdio.h>

int main(){
    int t, n, arr[41][2];
    arr[0][0] = 1, arr[0][1] = 0, arr[1][0] = 0, arr[1][1] = 1; // initial settings
    for(int i = 2; i<=40; i++){ //DP
        arr[i][0] = arr[i-1][0] + arr[i-2][0];
        arr[i][1] = arr[i-1][1] + arr[i-2][1];
    }
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        scanf("%d",&n);
        printf("%d %d",arr[n][0], arr[n][1]);
        if(i != t-1) printf("\n");
    }
}