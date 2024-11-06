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
    int n,x;
    scanf("%d %d", &n, &x);

    //-----------------//
    //     process     //
    //-----------------//
    int a[1001];
    for(int i=1; i<=n ;i++){
        if(i==x){
            a[i]= 0;
        }
        else{
            a[i]=i;
        }
    }



    // for(int i=1; i<=n ;i++){
    //     printf("%d ", a[i]);
    // }
    // printf("\n");

    int even=0;
    for(int i=1; i<=n ;i++){
        if((x+a[i])%2==0 && a[i]!=0){
            even++;
        }
    }


    //----------------//
    //     output     //
    //----------------//
    printf("%d\n", even);

    

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