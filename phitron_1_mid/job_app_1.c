//author:   swarupSikder
//judge:    hackerRank
//problem:  job application 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n ;i++){
        if(a[i]<1){
            printf("Entry-level candidate\n");
        }
        else if(1<=a[i] && a[i]<=3){
            printf("Junior candidate\n");
        }
        else if(4<=a[i] && a[i]<=7){
            printf("Mid-level candidate\n");
        }
        else{
            printf("Senior candidate\n");
        }
    }

    return 0;
}