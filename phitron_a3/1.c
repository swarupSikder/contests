//author:   SwarupSikder
//Judge:    hackerRank
//Problem:  1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int main(){
    //---------------//
    //     input     //
    //---------------//
    int n;
    scanf("%d", &n);

    int a[n][n];
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            scanf("%d", &a[i][j]);
        }
    }


    //-----------------//
    //     process     //
    //-----------------//
    int flag=0;
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            if(i==j && a[i][j]==1){
                flag++;
            }
            else if(a[i][j]==0){
                flag++;
            }
        }
    }


    //---------- -----//
    //     output     //
    //----------------//
    if(flag==n*n){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }


    

    return 0;
}