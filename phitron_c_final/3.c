//auther:   Swarup Sikder
//judge:    hackerRank (Phitron C final)
//problem:  3. Swap in Matrix
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int main(){
    //-------------//
    //    input    //
    //-------------//
    int n,m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            scanf("%d", &a[i][j]);
        }
    }

    //---------------//
    //    process    //
    //---------------//
    //col swap
    //0th element of each row will be swapped with (m-1)th
    //n number of element will be manipulated, so
    //n will be used in condition
    for(int i=0; i<n ;i++){
        int temp= a[i][0];
        a[i][0]= a[i][m-1];
        a[i][m-1]= temp;
    }

    //row swap
    //0th element of each col will be swapped with (n-1)th
    //m number of element will be manipulated, so
    //m will be used in condition
    for(int i=0; i<m ;i++){
        int temp= a[0][i];
        a[0][i]= a[n-1][i];
        a[n-1][i]= temp;
    }

    //--------------//
    //    output    //
    //--------------//
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}