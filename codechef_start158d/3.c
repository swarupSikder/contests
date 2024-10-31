//author:   SwarupSikder
//Judge:    Codechef
//Problem:  3

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void reverse(char* str) {
    int first = 0;
    int last = strlen(str) - 1;
    char temp;

    while (first < last) {
        //swap
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;

        //move pointers towards each other
        first++;
        last--;
    }
}

bool palindrome(char s[]){
    char t[200001];

    //copy to t[]
    strcpy(t, s);

    //reverse s[]
    reverse(t);

    if(strcmp(s, t)==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d\n", &n);

        //input the array
        char a[200001];
        gets(a);

        
        int count=0;
        for(int i=n-1; i>=0 ;i--){
            if(palindrome(a)){
                count=i+1;
                break;
            }
            else{
                a[i]='\0';
            }
        }

        printf("%d\n", count);
        
    }
    

    return 0;
}