//auther:   Swarup Sikder
//judge:    codeChef
//contest:  start 160d
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void reverse(char* str, int first, int last) {
    // Base case is when first becomes greater than last
    if (first >= last) {
        return;
    }

    // Swap characters
    char temp = str[first];
    str[first] = str[last];
    str[last] = temp;

    // Recursively call the function with updated
      // index pointers
    reverse(str, first + 1, last - 1);
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n, m;
    scanf("%d %d\n", &n, &m);

    char s[200000], t[200000];
    gets(s);
    gets(t);


    //-----------------//
    //     process     //
    //-----------------//
    if(strcmp(s,t)==0){
        printf("YES\n");
    }
    else{
        int len_s = n;
        for(int i=0; i<n ;i++){
            if(s[i]=='a'){
                reverse(s, 0, len_s);
                len_s++;

                s[len_s]='a';
                s[len_s-1]='b';
                reverse(s, 0, len_s);
                break;


                // for(int j=i; j<len_s ;j++){
                //     s[i]='a';
                // }

                // if(strcmp(s,t)!=0){

                // }
            }
        }
    }



    //----------------//
    //     output     //
    //----------------//
    printf("%s\n", s);
    printf("%s\n", t);
}
int main(){
    //-------------------//
    //     test case     //
    //-------------------//
    int t;
    scanf("%d\n", &t);

    while(t--){
        body();
    }

    return 0;
}