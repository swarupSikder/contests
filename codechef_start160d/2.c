//auther:   Swarup Sikder
//judge:    codeChef
//contest:  start 160d
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    int n, k;
    scanf("%d %d", &n, &k);


    //-----------------//
    //     process     //
    //-----------------//
    int slices_10 = n*10;
    int slices_12 = n*12;


    //----------------//
    //     output     //
    //----------------//
    if(slices_10<=k && k<=slices_12){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
int main(){
    //-------------------//
    //     test case     //
    //-------------------//
    int t;
    scanf("%d", &t);

    while(t--){
        body();
    }

    return 0;
}