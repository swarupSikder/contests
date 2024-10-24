#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int minVal(int a[], int size){
    int min = a[0];
    for(int i=0; i<size ;i++){
        if(a[i]<=min){
            min = a[i];
        }
    }
    return min;
}

int maxVal(int a[], int size){
    int max = a[0];
    for(int i=0; i<size ;i++){
        if(a[i]>=max){
            max = a[i];
        }
    }
    return max;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        //-----------------//
        //      input      //
        //-----------------//
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n];
        for(int i=0; i<n ;i++){
            scanf("%d", &a[i]);
        }



        //-------------------//
        //      process      //
        //-------------------//

        //sorting
        // Sorting the array in ascending order
        int temp;
        for (int i=0; i<n-1 ; ++i) {
            for (int j=i+1; j<n ; ++j) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        //partition
        int s1[100000];
        int s2[100000];
        int s1_z=0, s2_z=0;

        for(int i=0; i<n ;i++){
            if(i<n-k){
                s1[s1_z]= a[i];
                s1_z++;
            }
            else{
                s2[s2_z]= a[i];
                s2_z++;
            }
        }

        // printf("s1: ");
        // for(int i=0; i<s1_z ;i++){
        //     printf("%d ", s1[i]);
        // }
        // printf("\n");

        // printf("s2: ");
        // for(int i=0; i<s2_z ;i++){
        //     printf("%d ", s2[i]);
        // }
        // printf("\n");

        //find len s
        // printf("s1 = %d\n", s1_z);
        // printf("s2 = %d\n", s2_z);

        //score
        // printf("min s1 = %d\n", minVal(s1, s1_z));
        // printf("max s1 = %d\n", maxVal(s1, s1_z));

        long long int score = (long long int) minVal(s1, s1_z)+ maxVal(s1, s1_z)+ minVal(s2, s2_z)+ maxVal(s2, s2_z);

        //------------------//
        //      output      //
        //------------------//
        printf("%lld\n", score);
    }
    

    return 0;
}