//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    int n;
    cin>> n;

    vector<int> a(n);
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    vector<int> b(n);
    b = a;

    sort(b.begin(), b.end());       //NlogN
    reverse(b.begin(), b.end());

    // for(int i=0; i<n ;i++){
    //     cout<< b[i] <<" ";
    // }
    // cout<<endl;

    //edge case
    if(b==a){
        cout<< 0 <<endl;
        return;
    }

    int countOK=0;
    for(int i=n-1; i>=0 ;i--){
        if(a[i]==b[i]){
            countOK++;
        }
        else{
            break;
        }
    }

    cout<< n-1-countOK <<endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        body();
    }
    
    return 0;
}