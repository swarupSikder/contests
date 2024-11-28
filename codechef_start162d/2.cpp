//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    int n;
    cin>> n;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    int sum=0;
    for(int i=0; i<n ;i++){
        sum += a[i];
    }

    int more_needed = 50*(n+1)-sum;
    if(more_needed<=0){
        cout<< 0 <<endl;
    }
    else if(more_needed>100){
        cout<< -1 <<endl;
    }
    else{
        cout<< more_needed <<endl;
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