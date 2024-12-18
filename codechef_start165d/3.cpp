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

    sort(a.begin(), a.end());       //NlogN

    // for(int i=0; i<n ;i++){
    //     cout<< a[i] <<" ";
    // }
    // cout<<endl;

    int sum = a[0];
    int k = 1;
    for(int i=1; i<n ;i++){
        a[i] -= k;

        if(a[i]<0) a[i] = 0;

        sum += a[i];
        k++;
    }

    // for(int i=0; i<n ;i++){
    //     cout<< a[i] <<" ";
    // }
    // cout<<endl;

    cout<< sum <<endl;

}

int main(){
    int t;
    cin>> t;

    while(t--){
        body();
    }
    
    return 0;
}