//author:    Swarup Sikder
//judge:     hackerRank
//mode:      b6 c++ midterm

#include <bits/stdc++.h>
using namespace std;

void body(){
    //-------------//
    //    input    //
    //-------------//
    int n,s;
    cin>> n >> s;
        
    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }
        
        
    //---------------//
    //    process    //
    //---------------//
    bool flag= false;
    for(int i=0; i<n-2 ;i++){
        for(int j=i+1; j<n-1 ;j++){
            for(int k=j+1; k<n ;k++){
                if(a[i]+a[j]+a[k]==s){
                    flag= true;
                    break;
                }
            }
        }
    }
        
        
    //--------------//
    //    output    //
    //--------------//
    (flag)? std::cout<<"YES" : std::cout<<"NO" ; 
}

int main(){
    //----------------//
    //    test case   //
    //----------------//
    int t;
    cin >> t;
    
    while(t--){
        body();
        cout<<endl;
    }
    
    return 0;
}