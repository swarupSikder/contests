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

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    //-----------------//
    //     process     //
    //-----------------//
    int max=a[0], min=a[0];
    int maxRecord=0, minRecord=0;
    for(int i=0; i<n ;i++){
        if(a[i]>max){
            max= a[i];
            maxRecord++;
        }

        if(a[i]<min){
            min= a[i];
            minRecord++;
        }
    }



    //----------------//
    //     output     //
    //----------------//
    printf("%d %d\n", maxRecord, minRecord);
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