//auther:   Swarup Sikder
//judge:    hackerRank (Phitron C final)
//problem:  1. Visiting Monument
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void fun(int i, int n){
    //base case
    if(i>n){
        return;
    }
    
    //up-stream
    printf("%d ", i);

    //recursive fun
    fun(i+1, n);

    //down-stream without n
    if(i!=n){
        printf("%d ", i);
    }
}

void body(){
    //-------------//
    //    input    //
    //-------------//
    int n;
    scanf("%d", &n);

    //----------------//
    //    fun call    //
    //----------------//
    fun(1,n);
}

int main(){
    //-----------------//
    //    test case    //
    //-----------------//
    int t;
    scanf("%d", &t);

    while(t--){
        body();
        printf("\n");
    }

    return 0;
}