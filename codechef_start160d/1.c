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
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);


    //-----------------//
    //     process     //
    //-----------------//
    int price;
    int generalPrice = x+y;

    if(z<generalPrice){
        price = 2*z + y;
    }
    else{
        price = 2*x + 3*y;
    }




    //----------------//
    //     output     //
    //----------------//
    printf("%d\n", price);
}
int main(){
    //-------------------//
    //     test case     //
    //-------------------//
    int t=1;
    //scanf("%d", &t);

    while(t--){
        body();
    }

    return 0;
}