//auther:       SwarupSikder
//judge:        hackerRank
//contest:      YCPC by Phitron
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    long long int n;
    scanf("%lld\n", &n);

    long long int *a = (long long int *) malloc(10000000*sizeof(long long int));
    //long long int a[1000000];
    for(long long int i=0; i<n ;i++){
        scanf("%lld", &a[i]);
    }

    
    //-----------------//
    //     process     //
    //-----------------//
    long long int opCount=0;
    for(long long int i=1; i<n-1 ;i++){
        long long int dif= a[i+1]-a[i-1];
        if(dif!=2){
            if(a[i-1]<=a[i] && a[i-1]!=a[i]-1){
                a[i-1]= a[i]-1;
                opCount++;
            }
            else if(a[i]>=a[i+1] && a[i]!=a[i+1]-1){
                a[i+1]= a[i]+1;
                opCount++;
            }
        }
        else{
            if(a[i-1]!=a[i]-1){
                a[i]= a[i-1]+1;
                opCount++;
            }
        }
    }


    //----------------//
    //     output     //
    //----------------//
    printf("%lld\n", opCount);
    free(a);
}


int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        body();
    }

    return 0;
}