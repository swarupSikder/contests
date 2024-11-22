//author:    Swarup Sikder
//judge:     hackerRank
//mode:      b6 c++ midterm

#include <bits/stdc++.h>
using namespace std;

int main(){
    //-------------//
    //    input    //
    //-------------//
    char* s = new char[100005];
    
    while(cin.getline(s, 100005)){
    
        //length
        int n = strlen(s);
        
        //initialize new array a[]
        //ignoring spaces
        char a[100005];
        int j=0;
        for(int i=0; i<n ;i++){
            if(s[i]!=' '){
                a[j] = s[i];
                j++;
            }
        }
        //null ending
        a[j]= '\0';
        
        
        //check new array is null or not
        if(j==0){
            cout << "" << endl;
            continue;
        }
        
        //check new array contain a single char
        if(j==1){
            cout << a[0] << endl;
            continue;
        }
        
        //sort
        sort(a, a+j);
           
        //--------------//
        //    output    //
        //--------------//
        cout << a << endl;
        
    }
    
    //free memory after use
    delete[] s;
    
    return 0;
}