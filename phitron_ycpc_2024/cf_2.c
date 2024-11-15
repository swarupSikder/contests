//auther:       SwarupSikder
//judge:        codeForces
//contest:      984 d3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    int n,k;
    scanf("%d", &n);
    scanf("%d", &k);

    int b,c[200000];
    int f[200000]={0};

    for(int i=0; i<k ;i++){
        scanf("%d %d", &b, &c[i]);
        f[b]= f[b]+c[i];
    }
    
    //-----------------//
    //     process     //
    //-----------------//
    
    // for(int i=1; i<=k; i++){
    //     printf("%d ", f[i]);
    // }
    // printf("\n");
    
    


    //----------------//
    //     output     //
    //----------------//
    int sum=0;
    for(int i=1; i<=n ;i++){
        sum= sum+f[i];
    }

    printf("%d\n", sum);
}


int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        body();
    }

    return 0;
}