//author:   Swarup Sikder
//judge:    hackerRank
//problem:  Sorted
#include <bits/stdc++.h>
using namespace std;

void body(){
    int n;
    cin>> n;

    vector<long long> a(n);
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    //check sorted or unsorted
    bool sortFlag = true;
    for(int i=0; i<n-1 ;i++){
        if(a[i] > a[i+1]){
            sortFlag = false;
            break;
        }
    }

    //output
    (sortFlag)? std::cout<< "YES" <<endl : std::cout<< "NO" <<endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        body();
    }
    return 0;
}