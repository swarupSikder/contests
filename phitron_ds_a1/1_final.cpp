//author:   Swarup Sikder
//judge:    hackerRank
//problem:  Duplicate
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    vector<long long> a(n);
    for (int i=0; i<n ;i++) {
        cin>> a[i];
    }

    //Sort the array (O(NlogN))
    sort(a.begin(), a.end());

    bool hasDuplicate = false;
    for(int i=0; i<n-1 ;i++){     //O(N)
        if(a[i]==a[i+1]){         //check the next adjacent element
            hasDuplicate = true;
            break;
        }
    }

    (hasDuplicate)? std::cout<< "YES" : std::cout<< "NO" <<endl;
    
    return 0;
}