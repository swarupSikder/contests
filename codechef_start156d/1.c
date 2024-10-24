#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int x,n;
    scanf("%d %d", &x, &n);



    //-------------------//
    //      process      //
    //-------------------//
    int remainMoney = x - n*10;
    //printf("remain = %d\n", remainMoney);

    int jalebiCount = remainMoney/20;


    //------------------//
    //      output      //
    //------------------//

    printf("%d\n", jalebiCount);

    return 0;
}