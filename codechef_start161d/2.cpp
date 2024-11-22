//author:   Swarup Sikder
//judge:    CodeChef
//contest:  start 161d
#include <bits/stdc++.h>
using namespace std;

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n, m;
    cin>> n >> m;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    int b[m];
    for(int i=0; i<m ;i++){
        cin>> b[i];
    }

    //-----------------//
    //     process     //
    //-----------------//
    int countSad = 0;
    for(int i=0; i<m ;++i){
        int type = b[i]-1;    //convert 1-based index to 0-based

        if(a[type]>0){
            a[type]--;        //sell a donut of the requested type
        }
        else{
            countSad++;       //no donuts left for this customer
        }
    }

    //----------------//
    //     output     //
    //----------------//
    cout << countSad << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        body();
    }
    
    return 0;
}