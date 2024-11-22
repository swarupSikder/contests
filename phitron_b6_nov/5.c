//auther:   Swarup Sikder
//judge:    hackerRank
//contest:  phitron_b6_nov
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    int n,m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            scanf("%d", &a[i][j]);
        }
    }

    //-----------------//
    //     process     //
    //-----------------//
    int countPeak=0;

    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            //0,0
            if( i==0 && j==0 &&
                a[i+1][j]<a[i][j] &&          //bottom
                a[i][j+1]<a[i][j]             //right)
                ){
                printf("%d %d\n", i+1, j+1);
                countPeak++;
                continue;
            }

            //0,...
            if( i==0 && j!=m-1 &&
                a[i+1][j]<a[i][j] &&          //bottom
                a[i][j-1]<a[i][j] &&          //left
                a[i][j+1]<a[i][j]             //right
                ){
                printf("%d %d\n", i+1, j+1);
                countPeak++;
                continue;
            }

            //0,n
            if( i==0 && j==m-1 &&
                a[i+1][j]<a[i][j] &&          //bottom
                a[i][j-1]<a[i][j]             //left
                ){
                printf("%d %d\n", i+1, j+1);
                countPeak++;
                continue;
            }

            //...,0
            if( i!=n-1 && j==0 &&
                a[i-1][j]<a[i][j] &&          //top
                a[i+1][j]<a[i][j] &&          //bottom
                a[i][j+1]<a[i][j]             //right
                ){
                printf("%d %d\n", i+1, j+1);
                countPeak++;
                continue;
            }

            //...,n
            if( i!=n-1 && j==m-1 &&
                a[i-1][j]<a[i][j] &&          //top
                a[i+1][j]<a[i][j] &&          //bottom
                a[i][j-1]<a[i][j]             //left
                ){
                printf("%d %d\n", i+1, j+1);
                countPeak++;
                continue;
            }

            //n,0
            if( i==n-1 && j==0 &&
                a[i-1][j]<a[i][j] &&          //top
                a[i][j+1]<a[i][j]             //right
                ){
                printf("%d %d\n", i+1, j+1);
                countPeak++;
                continue;
            }

            //n,...
            if( i==n-1 && j!=0 &&
                a[i-1][j]<a[i][j] &&          //top
                a[i][j-1]<a[i][j] &&          //left
                a[i][j+1]<a[i][j]             //right
                ){
                printf("%d %d\n", i+1, j+1);
                countPeak++;
                continue;
            }

            //n,n
            if( i==n-1 && j==m-1 &&
                a[i-1][j]<a[i][j] &&          //top
                a[i][j-1]<a[i][j]             //left
                ){
                printf("%d %d\n", i+1, j+1);
                countPeak++;
                continue;
            }

            //... , ...
            if( i!=n-1 && j!=m-1 &&
                a[i-1][j]<a[i][j] &&          //top
                a[i+1][j]<a[i][j] &&          //bottom
                a[i][j-1]<a[i][j] &&          //left
                a[i][j+1]<a[i][j]             //right
                ){
                printf("%d %d\n", i+1, j+1);
                countPeak++;
                continue;
            }
        }
    }

    printf("%d\n", countPeak);
}
int main(){
    //-------------------//
    //     test case     //
    //-------------------//
    int t=1;
    //scanf("%d", &t);

    while(t--){
        body();
    }

    return 0;
}