//author:   swarupSikder
//judge:    hackerRank
//problem:  lexic max max
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    //---------------//
    //     input     //
    //---------------//
    char s1[1000], s2[1000], s3[1000];
    scanf("%s %s %s", s1, s2, s3);


    //-----------------//
    //     process     //
    //-----------------//
    //find min
    char min[1000];
    if((strcmp(s1,s2)<=strcmp(s2,s1)) && strcmp(s1,s3)<=strcmp(s3,s1)){
        strcpy(min, s1);
    }
    else if((strcmp(s2,s1)<=strcmp(s1,s2)) && strcmp(s2,s3)<=strcmp(s3,s2)){
        strcpy(min, s2);
    }
    else if((strcmp(s3,s1)<=strcmp(s1,s3)) && strcmp(s3,s2)<=strcmp(s2,s3)){
        strcpy(min, s3);
    }
    printf("%s\n", min);
    



    //find max
    char max[1000];
    if((strcmp(s1,s2)>=strcmp(s2,s1)) && strcmp(s1,s3)>=strcmp(s3,s1)){
        strcpy(max, s1);
    }
    else if((strcmp(s2,s1)>=strcmp(s1,s2)) && strcmp(s2,s3)>=strcmp(s3,s2)){
        strcpy(max, s2);
    }
    else if((strcmp(s3,s1)>=strcmp(s1,s3)) && strcmp(s3,s2)>=strcmp(s2,s3)){
        strcpy(max, s3);
    }
    printf("%s\n", max);



    return 0;
}