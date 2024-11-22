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
    char s[1001];
    scanf("%s", s);

    //-----------------//
    //     process     //
    //-----------------//
    //Check Point (1)
    int len = strlen(s);
    int flag=0;

    for(int i=0; i<len/2 ; i++){
        if(s[i]!= s[len-i-1]){
            flag= 1;
            break;
        }
    }

    if(flag==0){
        printf("%d\n", 0);
        return;
    }



    //Check Point (2)
    int fre[26]= {0};

    for(int i=0; i<len ;i++){
        fre[s[i]-'a']++;
    }

    //count single elements
    int countOdds=0;
    for(int i=0; i<26 ;i++){
        if(fre[i]%2!=0){
            countOdds++;
        }
    }


    //----------------//
    //     output     //
    //----------------//
    if(countOdds>1){
        printf("%d\n", countOdds-1);
    }
    else{
        printf("%d\n", 0);
    }
    
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