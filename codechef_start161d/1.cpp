//author:   Swarup Sikder
//judge:    CodeChef
//contest:  start 161d
#include <bits/stdc++.h>
using namespace std;

void body(){
    //---------------//
    //     input     //
    //---------------//
    long long x,y;
    cin>> x >> y;



    //-----------------//
    //     process     //
    //-----------------//
    long long money = x*5000 + y*9800;


    //----------------//
    //     output     //
    //----------------//
    cout<< money <<endl;
}

int main(){
    int t=1;
    //cin>> t;

    while(t--){
        body();
    }
    
    return 0;
}