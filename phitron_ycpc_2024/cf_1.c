//auther:       SwarupSikder
//judge:        codeForces
//contest:      984 d3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    int n;
    scanf("%d\n", &n);

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }
    

    
    //-----------------//
    //     process     //
    //-----------------//
    bool flag;
    for(int i=0; i<n-1 ;i++){
        if(abs(a[i]-a[i+1])==5 || abs(a[i]-a[i+1])==7){
            flag= true;
        }
        else {
            flag= false;
            break;
        }
    }

    


    //----------------//
    //     output     //
    //----------------//
    if(flag){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}


int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        body();
    }

    return 0;
}