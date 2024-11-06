//auther:   Swarup Sikder
//judge:    codeChef
//contest:  start 159d
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
static int divisor(int number)
    {
        int i;
        for (i = 2; i <=sqrt(number); i++)
        {
            if (number % i == 0)
            {
                return number/i;
            }
        }
        return 1;
    }

void body(){
    //---------------//
    //     input     //
    //---------------//
    long long int h,k;
    scanf("%lld %lld", &h, &k);

    //-----------------//
    //     process     //
    //-----------------//
    //multiply the health
    h= h*k;

    

    //count rounds
    long long int count=0;
    while(1){
        if(h<=1){
            break;
        }
        else{
            count++;
        }
        
        h= divisor(h);

    }

    //----------------//
    //     output     //
    //----------------//
    printf("%lld\n", count);

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