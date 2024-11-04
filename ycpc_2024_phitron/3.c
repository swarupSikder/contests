//auther:       SwarupSikder
//judge:        hackerRank
//contest:      YCPC by Phitron
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define max 158         //Factorial of 100 is of 157 digits
void fac(int N, int d) {
	int i, j, x, len, carry;

    //Maximum number needs to factor = 100
	int a[max]= {0};
	a[0]= 1;
	len= 1;
	carry= 0;


    //Main Process
	for(i=1; i<=N ;i++) {
        //printf("for loop\n");
		for(j=0; j<len ;j++) {
			x=      a[j]*i + carry;
			a[j]=   x%10;
			carry=  x/10;

            //printf("%d %d %d\n", x, a[j], carry);
		}
		while(carry>0) {
			a[len]= carry%10;
			carry=  carry/10;
			len++;
            //printf("\nif exists while loop\n");
            //printf("%d %d %d\n", a[len], carry, len);
		}
	}
	
	

    int rem = 0;
    int dvnd;
    int quot;
    for(int i = 0; i < (sizeof(a)/sizeof(a[0])) ; i++){
        dvnd = (rem * 10) + a[i];
        rem = dvnd % d;
        quot = dvnd / d;
        a[i] = quot;
    }


    for(int i=len-1; i>=0 ;i--){
        printf("%d", a[i]);
    }
    printf("\n");

    
    //printf("\n-------------------\n");
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n,d;
    scanf("%d %d", &n, &d);
    

    //-----------------//
    //     process     //
    //-----------------//

    //----------------//
    //     output     //
    //----------------//
    fac(n, d);
}


int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        body();
    }

    return 0;
}