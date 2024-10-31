//author:   SwarupSikder
//Judge:    hackerRank
//Problem:  2

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int main(){
    //---------------//
    //     input     //
    //---------------//
    int n,m,x;
    scanf("%d %d %d", &n, &m, &x);

    //frequency array
    int f[1001];
    for(int i=0; i<1001 ;i++){
        f[i]=0;
    }

    int a[n][m];
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            scanf("%d", &a[i][j]);
            f[a[i][j]]++;
        }
    }


    //---------- -----//
    //     output     //
    //----------------//
    int num;
    for(int i=0; i<x ;i++){
        scanf("%d", &num);
        printf("%d\n", f[num]);    
    }

    return 0;
}