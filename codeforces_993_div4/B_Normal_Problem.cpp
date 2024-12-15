//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    string a;
    cin>> a;
    
    for(int i=0; i<a.size() ;i++){
        if(a[i]=='p'){
            a[i]= 'q';
        }
        else if(a[i]=='q'){
            a[i]= 'p';
        }
    }

    reverse(a.begin(), a.end());
    cout<< a <<endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        body();
    }
    
    return 0;
}