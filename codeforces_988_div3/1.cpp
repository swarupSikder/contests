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
    int fre[21]= {0};

    for(int i=0; i<n ;i++){
        cin>>a[i];
        fre[a[i]]++;
    }


    //-----------------//
    //     process     //
    //-----------------//
    int score=0;
    for(int i=1; i<=20 ;i++){
        score += fre[i]/2;
    }
    

    //----------------//
    //     output     //
    //----------------//
    cout<< score <<endl;
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