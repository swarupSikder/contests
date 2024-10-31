//author:   SwarupSikder
//Judge:    Codechef
//Problem:  1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    if((a-b)>=0){
        printf("%d\n", a-b);
    }
    else {
        printf("0\n");
    }

    return 0;
}