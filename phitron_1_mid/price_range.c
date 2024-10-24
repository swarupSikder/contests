//author:   swarupSikder
//judge:    hackerRank
//problem:  price range
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n,x,y;
    scanf("%d %d %d", &n, &x, &y);

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    int count=0;
    for(int i=0; i<n ;i++){
        if(x<=a[i] && a[i]<=y){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}