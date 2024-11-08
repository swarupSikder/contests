//auther:   Swarup Sikder
//judge:    hackerRank (Phitron C final)
//problem:  4. Same same but different
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
//call by ref
int minOp(int *a, int *b, int *c){
    if(*a<*b){
        if(*a<*c){
            return *a;
        }
        else{
            return *c;
        }
    }
    else{
        if(*b<*c){
            return *b;
        }
        else{
            return *c;
        }
    }
}

int opCount(char *s1, char *s2, char *s3, int len){
    int countOp=0;
    for(int i=0; i<strlen(s1) ;i++){
        if(s1[i]!=s2[i]){
            countOp++;
        }

        if(s1[i]!=s3[i]){
            countOp++;
        }
    }

    return countOp;
}

int main(){
    //-------------//
    //    input    //
    //-------------//
    char s1[101], s2[101], s3[101];
    scanf("%s\n", s1);
    scanf("%s\n", s2);
    scanf("%s\n", s3);

    //---------------//
    //    process    //
    //---------------//
    //s1--->s2>s3
    int op_s1= opCount(s1, s2, s3, strlen(s1));

    //s2--->s1>s3
    int op_s2= opCount(s2, s1, s3, strlen(s2));

    //s3--->s1>s2
    int op_s3= opCount(s3, s1, s2, strlen(s3));

    //find min operation
    int min_op_count = minOp(&op_s1, &op_s2, &op_s3);


    //--------------//
    //    output    //
    //--------------//
    printf("%d\n", min_op_count);

    return 0;
}