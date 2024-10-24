#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    //-------------//
    //    input    //
    //-------------//
    int N;
    scanf("%d", &N);

    int a[N];
    for(int i=0; i<N ;i++){
        scanf("%d", &a[i]);
    }


    //---------------//
    //    process    //
    //---------------//
    //find max
    int max= a[0];
    for(int i=0; i<N ;i++){
        if(a[i]>max){
            max= a[i];
        }
    }

    //dif of every salami
    for(int i=0; i<N ;i++){
        printf("%d ", max-a[i]);
    }
    printf("\n");
    

    return 0;
}