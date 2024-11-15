//auther:   Swarup Sikder
//judge:    codeChef
//contest:  start 160d
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void countCharacters(const char *str, long long *count_a, long long *count_b){
    *count_a = 0;
    *count_b = 0;
    for(long long i = 0; str[i] != '\0'; i++) {
        if (str[i]=='a') {
            (*count_a)++;
        }
        else if(str[i]=='b') {
            (*count_b)++;
        }
    }
}

const char* checkEqual(const char *S, const char *T){
    long long count_a_S, count_b_S;
    long long count_a_T, count_b_T;
    
    countCharacters(S, &count_a_S, &count_b_S);
    countCharacters(T, &count_a_T, &count_b_T);

    if(count_a_S>=count_a_T && count_b_S+(count_a_S - count_a_T) >= count_b_T) {
        return "Yes";
    } 
    else{
        return "No";
    }
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        long long N, M;
        scanf("%lld %lld", &N, &M);
        
        char *S= (char*)malloc((N+1)*sizeof(char));
        char *T= (char*)malloc((M+1)*sizeof(char));
        
        if (S == NULL || T == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }
        
        scanf("%s", S);
        scanf("%s", T);

        printf("%s\n", checkEqual(S, T));
        
        // Free allocated memory
        free(S);
        free(T);
    }
    
    return 0;
}
