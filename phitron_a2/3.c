#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    //-------------//
    //    input    //
    //-------------//
    int N;
    scanf("%d", &N);

    int a[N];
    for(int i=0; i<N ;i++){
        scanf("%d", &a[i]);
    }


    //---------------//
    //    process    //
    //---------------//
    int X;
    scanf("%d", &X);
    X--;

    if(a[X]==0){
        a[X]=1;
    }
    else if(a[X]==1){
        a[X]=0;
    }



    //--------------//
    //    output    //
    //--------------//
    for(int i=0; i<N ;i++){
        printf("%d ", a[i]);
    }


    return 0;
}