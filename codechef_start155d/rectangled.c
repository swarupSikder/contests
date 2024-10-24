#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        //find the length and width
        int sum= n/2;
        int wid= sum/2;
        int len= sum-wid;

        printf("%d\n", len*wid);
    }

    return 0;
}