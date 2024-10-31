//author:   SwarupSikder
//Judge:    hackerRank
//Problem:  3

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

    //frequency array
    int f[100001];
    for(int i=0; i<100001 ;i++){
        f[i]=0;
    }

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
        f[a[i]]++;
    }

    // for(int i=0; i<100001 ;i++){
    //     printf("%d ", f[i]);
    // }

    //-----------------//
    //     process     //
    //-----------------//
    int count=0;
    for(int i=0; i<100001 ;i++){
        if(f[i]==1){
            count++;
        }
    }

    //---------- -----//
    //     output     //
    //----------------//
    printf("%d\n", count);
    

    return 0;
}