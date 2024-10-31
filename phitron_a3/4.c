//author:   SwarupSikder
//Judge:    hackerRank
//Problem:  4

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


    int i=0;
    int *a = (int *) malloc(1*sizeof(int));
    

    while(1){
        
        scanf("%d", &a[i]);
        i++;
        int *temp = a;
        a = (int *) realloc(a, (i+1)*sizeof(int));
        if(a==NULL){
            a=temp;
        }

        if(i==n){
            break;
        }
    }
    
    


    //---------- -----//
    //     output     //
    //----------------//
    for(int i=0; i<n ;i++){
        printf("%d ", a[i]);
    }
    printf("\n");


    free(a);
    return 0;
}