//author:    Swarup Sikder
//judge:     hackerRank
//mode:      b6 c++ midterm

#include <bits/stdc++.h>
using namespace std;

int main(){
    //-------------//
    //    input    //
    //-------------//
    int n;
    cin >> n;
    
    int a[n];
    for(int i=0; i<n ;i++){
        cin >> a[i];
    }
    
    
    //------------------//
    //    ASC Output    //
    //------------------//
    sort(a, a+n);
    for(int i=0; i<n ;i++){
        cout << a[i];
        (i!=n-1)? std::cout<<" " : std::cout << endl;
    }
    

    //-------------------//
    //    DESC Output    //
    //-------------------//
    sort(a, a+n, greater<int>());
    for(int i=0; i<n ;i++){
        cout << a[i];
        (i!=n-1)? std::cout<<" " : std::cout << endl;
    }
    
    return 0;
}