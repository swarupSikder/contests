#include <stdio.h>
int gcd(int a[], int len){
    //find min max
    int min= a[0];
    int max= a[0];
    for(int i=0; i<len ;i++){
        if(a[i]<=min){
            min= a[i];
        }

        if(a[i]>=max){
            max= a[i];
        }
    }

    //printf("min= %d\n", min);

    int gcd=1;
    for(int i=2; i<=min ;i++){
        int countDiv=0;
        for(int j=0; j<len ;j++){
            if(a[j]%i==0){
                countDiv++;
            }
        }
        
        //if each of the element is divisible by i
        //update gcd = i
        if(countDiv==len){
            gcd= i;
        }
    }

    return gcd;
}

int main(){
    // int len=3;
    // int a[len];

    // for(int i=0; i<len ;i++){
    //     scanf("%d", &a[i]);
    // }

    // printf("gcd = %d\n", gcd(a, len));

    int t;
    scanf("%d", &t);

    while(t--){
        int r,c;
        scanf("%d %d", &r, &c);

        //initialize Array
        int a[r][c];
        int temp=2;
        for(int i=0; i<r ;i++){
            for(int j=0; j<c ;j++){
                a[i][j]= temp;
                temp+=2;
            }
        }

        //--------------------//
        //      row check     //
        //--------------------//
        //update array (row check)
        //convert 2D to 1D array
        for(int i=0; i<r ;i++){
            for(int j=0; j<c ;j++){
                if(gcd(a[i], r)!=1){
                    a[i][j]+=1;
                }
            }
        }

        //transpose array
        int trans[c][r];
        for(int i=0; i<r ;i++){
            for(int j=0; j<c ;j++){
                trans[j][i]=a[i][j];
            }
        }
        int op;
        op= r;
        r= c;
        c= op;

        //--------------------//
        //      col check     //
        //--------------------//
        //update array (row check)
        //convert 2D to 1D array
        for(int i=0; i<r ;i++){
            for(int j=0; j<c ;j++){
                if(gcd(trans[i], r)!=1){
                    trans[i][j]+=1;
                }
            }
        }

        //re-transpose array
        for(int i=0; i<r ;i++){
            for(int j=0; j<c ;j++){
                a[j][i]=trans[i][j];
            }
        }
        op= r;
        r= c;
        c= op;
        

        for(int i=0; i<r ;i++){
            for(int j=0; j<c ;j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        // printf("---------------\n");

        // for(int i=0; i<c ;i++){
        //     for(int j=0; j<r ;j++){
        //         printf("%d ", trans[i][j]);
        //     }
        //     printf("\n");
        // }
    }

    return 0;
}