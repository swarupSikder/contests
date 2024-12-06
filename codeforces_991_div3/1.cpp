//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    int n,m;
    cin>> n >> m;
    cin.ignore();

    string line;
    //string s;
    int count_x=0;
    int count_word=0;

    // Loop to read input line by line
    while (n--) {
        getline(cin, line);
       // s += line;
        

        stringstream ss(line);
        std::string word;

        // Extract words from the current line
        while (ss >> word) {
            count_x += word.size();
            if(count_x<=m){
                count_word++;
            }
            else{
                break;
            }

            //cout << word << endl;
        }
    }
    //cout<< s <<endl;
    cout<< count_word <<endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        body();
    }
    
    return 0;
}