//auther:   Swarup Sikder
//judge:    hackerRank
//contest:  phitron_b6_nov
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    int n;
    scanf("%d", &n);

    //-----------------//
    //     process     //
    //-----------------//
    int sum=0;
    for(int i=1; i<=n ;i++){
        if(i%2==0){
            sum += i;
        }
    }



    //----------------//
    //     output     //
    //----------------//
    printf("%d\n", sum);
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