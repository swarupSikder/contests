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

        //optimization array a[n]
        int b[n];
        int sumOP=a[0];
        int temp;
        for(int i=0; i<n ;i++){
            for(int j=1; j<n ;j++){
                if((a[i]+a[j])%2==1){
                    b[j-1]=a[j];
                }
            }
        }



        // for(int i=0; i<n-1 ;i++){
        //     if((a[i]+a[i+1])%2==0){
        //         temp = a[i+1];
        //         a[i+1] = a[i+2];
        //     }
        // }





        //sum array
        int sum[n];
        sum[0]=a[0];
        for(int i=1; i<n ;i++){
            sum[i]= sum[i-1] + a[i];
            //printf("%d ", sum[i]);
        }


        for(int i=0; i<n ;i++){
            printf("%d ", sum[i]);
        }
        printf("\n");

        //------------------//
        //      output      //
        //------------------//

        //printf("%d\n", n-count);
    }
    

    return 0;
}