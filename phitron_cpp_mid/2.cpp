//author:    Swarup Sikder
//judge:     hackerRank
//mode:      b6 c++ midterm

#include <bits/stdc++.h>
using namespace std;

int* sort_it(int n){
    int* a = new int[n];
    for(int i=0; i<n ;i++){
        cin >> a[i];
    }
    
    
    //-----------------//
    //    sort desc    //
    //-----------------//
    sort(a, a+n, greater<int>());
    
    return a;
}

int main(){
    //-------------//
    //    input    //
    //-------------//
    int n;
    cin >> n;
    
    
    
    //---------------//
    //    receive    //
    //---------------//
    int* x = sort_it(n);
    
    
    //--------------//
    //    output    //
    //--------------//
    for(int i=0; i<n ;i++){
        cout << x[i];
        (i!=n-1)? std::cout<<" " : std::cout << endl;
    }
    
    return 0;
}