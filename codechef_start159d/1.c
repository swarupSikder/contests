//auther:   Swarup Sikder
//judge:    codeChef
//contest:  start 159d
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    int x,y;
    scanf("%d %d", &x, &y);

    //-----------------//
    //     process     //
    //-----------------//
    int min;
    if(x<=y){
        min= x;
    }
    else{
        min= y;
    }

    //----------------//
    //     output     //
    //----------------//
    printf("%d\n", min);

    

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