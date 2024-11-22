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
    char s[1001], t[1001];
    scanf("%s\n", s);
    scanf("%s\n", t);

    //-----------------//
    //     process     //
    //-----------------//
    if(strlen(s)!=strlen(t)){
        printf("NO\n");
        return 0;
    }

    int s_freq[200];
    int t_freq[200];

    for(int i=97; i<=122 ;i++){
        s_freq[i]=0;
        t_freq[i]=0;
    }


    for(int i=0; i<strlen(s) ;i++){
        s_freq[s[i]]++;
    }

    for(int i=0; i<strlen(s) ;i++){
        t_freq[t[i]]++;
    }

    bool flag=true;
    for(int i=97; i<=122 ;i++){
        if(s_freq[i]!=t_freq[i]){
            flag=false;
            break;
        }
    }



    //----------------//
    //     output     //
    //----------------//
    if(flag){
        printf("YES\n");
    }
    else{
        printf("NO\n");
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