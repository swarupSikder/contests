#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        //-----------------//
        //      input      //
        //-----------------//
        int n;
        scanf("%d", &n);

        int a[n];
        for(int i=0; i<n ;i++){
            scanf("%d", &a[i]);
        }



        //-------------------//
        //      process      //
        //-------------------//
        int sushilVal= a[n-1];
        int count= 0;
        for(int i=n-2; i>=0 ;i--){
            if(a[i]>sushilVal/2){
                break;
            }

            if(a[i]<=sushilVal/2){
                count++;
            }
        }


        //------------------//
        //      output      //
        //------------------//

        printf("%d\n", n-count);
    }
    

    return 0;
}