//auther:   Swarup Sikder
//judge:    codeForces
//contest:  988 div 3
#include <bits/stdc++.h>
using namespace std;

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }


    //-----------------//
    //     process     //
    //-----------------//
    //possible value of n*m = h
    int h= n-2;
    //sort(a, a+n);

    int flag=0;
    for(int i=0; i<n-1 ;i++){
        for(int j=i+1; j<n ;j++){
            if(a[i]*a[j]==h){
                cout<<a[i] << " " << a[j] <<endl;
                flag=1;
                break;
            }
        }

        if(flag==1){
            break;
        }
    }
    

    //----------------//
    //     output     //
    //----------------//
}
int main(){
    //-------------------//
    //     test case     //
    //-------------------//
    int t;
    cin>>t;

    while(t--){
        body();
    }

    return 0;
}