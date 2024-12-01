//author:   Swarup Sikder
//judge:    hackerRank
//problem:  Find Jessica
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    string target = "Jessica";
    stringstream ss(s);
    string word;
    bool flag=false;
    while(ss >> word){
        if(word==target){
            flag= true;
            break;
        }
    }

    (flag)? std::cout<< "YES" <<endl : std::cout<< "NO" <<endl;
    
    return 0;
}