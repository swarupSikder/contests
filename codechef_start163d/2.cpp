//author:   Swarup Sikder
//judge:    CodeChef
//problem:  2
#include <bits/stdc++.h>
using namespace std;

void body(){
    int n,k;
    cin>> n >> k;

    //for even (n)
    if(n%2==0){
        if((n/2)==k){
            cout<< "YES" <<endl;
        }
        else{
            cout<< "NO" <<endl;
        }
    }
    //for odd (n)
    else{
        if((n/2)==k || (n/2)+1==k){
            cout<< "YES" <<endl;
        }
        else{
            cout<< "NO" <<endl;
        }
    }

    

}

int main(){
    int t;
    cin>> t;

    while(t--){
        body();
    }
    
    return 0;
}