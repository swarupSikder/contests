//author:   Swarup Sikder
//judge:    codeChef
//problem:  4

#include <bits/stdc++.h>
using namespace std;

void body(){
    int n,k;
    cin>> n >> k;

    //If k==1, return
    if(k==1){
        cout<< -1 <<endl;
        return;
    }

    //initialize permutation as [1, 2, ..., n]
    vector<int> a(n);
    for(int i=0; i<n ;i++) {
        a[i]= i+1;
    }

    //Rearrange
    for(int i=0; i+k<=n ; i+=k){
        rotate(a.begin()+i, a.begin()+i+1, a.begin()+i+k);
    }

    //output
    for(int i=0; i<n ;i++){
        cout<< a[i] <<" ";
    }
    cout<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        body();
    }
    return 0;
}
