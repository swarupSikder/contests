//author:   Swarup Sikder
//judge:    hackerRank
//problem:  Replace Word
#include <bits/stdc++.h>
using namespace std;

void body(){
    string s,x;
    cin>> s >> x;

    //replace task
    for(int i=0; i<int(s.size()-x.size()+1) ;i++){
        string substring;
        substring.assign(s,i, x.size());

        if(substring==x){
            s.replace(i, x.size(), "#");
        }
        //cout<< substring <<endl;
    }

    cout<< s <<endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        body();
    }
    
    return 0;
}