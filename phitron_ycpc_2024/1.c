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
    int n;
    scanf("%d\n", &n);

    char a[n];
    scanf("%s", a);

    
    //-----------------//
    //     process     //
    //-----------------//
    int countZero=0;
    int countOne= 0;
    for(int i=0; i<n ;i++){
        if(a[i]=='0'){
            countZero++;
        }
        else{
            countOne++;
        }
    }

    //----------------//
    //     output     //
    //----------------//
    printf("%d %d\n", countZero, countOne);
}


int main(){
    int t=1;
    //scanf("%d\n", &t);
    while(t--){
        body();
    }

    return 0;
}