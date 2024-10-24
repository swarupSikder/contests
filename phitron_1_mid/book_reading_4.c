//author:   swarupSikder
//judge:    hackerRank
//problem:  book reading 4
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n,t;
    scanf("%d %d", &n, &t);

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    int totalTime=0;
    int count=0;
    for(int i=0; i<n ;i++){
        totalTime += a[i];

        if(totalTime>t){
            break;
        }
        //printf("%d\n", totalTime);
        count++;
    }

    
    printf("%d\n", count);



    return 0;
}