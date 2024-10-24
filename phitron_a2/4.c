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


    //---------------//
    //    process    //
    //---------------//
    for(int i=1; i<=N ;i++){
        for(int j=1; j<=i ;j++){
            printf("%d", j);
        }
        printf("\n");
    }



    int line=0;
    for(int i=N; i>=1 ;i--){
        //Space Printer
        for(int j=0; j<=line ;j++){
            printf(" ");
        }
        
        //Number Printer
        for(int j=1; j<i ;j++){ 
            printf("%d", j);
        }
        printf("\n");
        //next line one space adding
        line++;
    }
    

    return 0;
}