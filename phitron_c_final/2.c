//auther:   Swarup Sikder
//judge:    hackerRank (Phitron C final)
//problem:  2. Jadu Matrix
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
    if(n!=m){
        printf("NO\n");
        return 0;
    }

    //element check for square matrix
    int flag=0;
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            //primary diagonal check
            if(i==j && a[i][j]!=1){
                flag=1;
                break;
            }

            //secondary diagonal check
            if(i+j==n-1 && a[i][j]!=1){
                flag=1;
                break;
            }
            
            //other element check
            if(i!=j && i+j!=n-1 && a[i][j]!=0){
                flag=1;
                break;
            }
        }
    }



    //--------------//
    //    output    //
    //--------------//
    if(flag==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}