#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char C;
    scanf("%c", &C);

    if( C=='a' ||
        C=='e' ||
        C=='i' ||
        C=='o' ||
        C=='u' ){
        
        //output
        printf("Vowel\n");
    }
    else{
        //output
        printf("Consonant\n");
    }

    return 0;
}