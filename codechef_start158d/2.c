//author:   SwarupSikder
//Judge:    Codechef
//Problem:  2

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int evenCount=0, oddCount=0;
        for(int i=1; i<=n ;i++){
            if(n%i==0 && i%2==0){
                //printf("even div of %d = %d\n", n, i);
                evenCount++;
            }
            else if(n%i==0 && i%2==1){
                //printf("odd div of %d = %d\n", n, i);
                oddCount++;
            }
        }

        if(evenCount>oddCount){
            printf("1\n");
        }
        else if(evenCount==oddCount){
            printf("0\n");
        }
        else if(evenCount<oddCount){
            printf("-1\n");
        }


    }
    

    return 0;
}