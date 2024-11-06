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
    int n,d;
    scanf("%d %d", &n, &d);

    //-----------------//
    //     process     //
    //-----------------//
    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    //initialize flag array
    int flag[n];
    for(int i=0; i<n ;i++){
        if(d>flag[i]){
            flag[i]=1;
        }
        else{
            flag[i]=0;
        }
    }

    
    for(int i=0; i<n ;i++){
        printf("%d ", flag[i]);
    }
    printf("\n");

    //----------------//
    //     output     //
    //----------------//
    

    

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