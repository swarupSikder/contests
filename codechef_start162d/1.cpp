//author:    Swarup Sikder
//judge:     codeChef
//mode:      ... 

#include <bits/stdc++.h>
using namespace std;

int main(){
    //-------------//
    //    input    //
    //-------------//
    int x,y,z;
    cin >> x >> y >> z;
    
    if(x>y*z){
        cout << x-y*z << endl;
    }
    else{
        cout << -1 << endl;
    }
    
    return 0;
}