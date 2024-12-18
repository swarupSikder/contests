//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    int n, m, k;
    cin>> n >> m >> k;

    vector<int> a(n*m);
    int idx=0;

    for(int i=1; i<=n ;i++){
        for(int j=1; j<=m ;j++){
            int perimeter = 2*(i+j);

            if(perimeter>k)break;

            a[idx] = perimeter;
            //cout<< i <<" "<< j <<" "<< perimeter <<endl;
            idx++;
        }

    }

    sort(a.begin(), a.end());

    // for(int i=0; i<a.size() ;i++){
    //     cout<< a[i] <<" ";
    // }
    // cout<<endl;

    //edge case
    if(a[a.size()-1]==0){
        cout<< abs(k-2*(1+1)) <<endl;
        return;
    }

    cout<< k-a[a.size()-1] <<endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        body();
    }
    
    return 0;
}