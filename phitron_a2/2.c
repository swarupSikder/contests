#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int N;
    scanf("%d", &N);

    int zeroCount=0;
    int oneCount= 0;
    while(N--){
        int num;
        scanf("%d", &num);

        if(num==1){
            oneCount++;
        }
        else{
            zeroCount++;
        }
    }

    printf("%d %d\n", zeroCount, oneCount);

    return 0;
}