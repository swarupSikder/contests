//auther:   Swarup Sikder
//judge:    hackerRank (Phitron C final)
//problem:  5. Find the Missing Number
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
//call by value
void missingNum(long long int m, int a, int b, int c){
    long long int m2, d;
    d= (long long int) m/(a*b*c);
    m2= (long long int) a*b*c*d;

    if(m2==m){
        printf("%lld", d);
    }
    else{
        printf("-1");
    }
}

void body(){
    //-------------//
    //    input    //
    //-------------//
    long long int m;
    int a,b,c;
    scanf("%lld %d %d %d", &m, &a, &b, &c);

    //---------------//
    //    fun call   //
    //---------------//
    missingNum(m, a, b, c);
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