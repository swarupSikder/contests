//author:   SwarupSikder
//Judge:    Codechef
//Problem:  5

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);

    //input the array
    int a[n+1][m+1];
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            scanf("%d", &a[i][j]);
        }
    }

    //sort the array
    int temp;
    for(int i=0; i<n ;i++){
        for(int j=0; j<m-1 ;j++){
            if(a[i][j]>a[i][j+1]){
                temp= a[i][j];
                a[i][j]= a[i][j+1];
                a[i][j+1]= temp;
            }

            if(a[i][m-1]>a[i+1][0]){
                temp= a[i][m-1];
                a[i+1][j]= a[i][j+1];
                a[i][j+1]= temp;
            }
        }
    }

    //print the array
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}