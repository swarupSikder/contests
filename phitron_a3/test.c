//author:   SwarupSikder
//Judge:    hackerRank
//Problem:  test

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int main(){

    //---------------//
    //     input     //
    //---------------//
    int n,m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            scanf("%d", &a[i][j]);
        }
    }

    //-----------------//
    //     process     //
    //-----------------//
    int lineArray[n*m];
    int k=0;
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            lineArray[k]=a[i][j];
            k++;
        }
    }




    //---------- -----//
    //     output     //
    //----------------//
    


    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}