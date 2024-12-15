//author:   Swarup Sikder
//judge:    hackerRank
//problem:  Get Prefix Sum
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    vector<long long> a(n);
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    //sum array
    vector<long long> sum(n);
    sum[0] = a[0];
    for(int i=1; i<n ;i++){
        sum[i] = sum[i-1] + a[i];
    }

    //reverse the sum array
    reverse(sum.begin(), sum.end());

    //print the sum array
    for(int i=0; i<n ;i++){
        cout<< sum[i] <<" ";
    }
    cout<< endl;

    
    return 0;
}