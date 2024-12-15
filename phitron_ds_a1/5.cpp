//author:   Swarup Sikder
//judge:    hackerRank
//problem:  Printing X
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    if(n==1){
        cout<< "X" <<endl;
        return 0;
    }
    else if(n==3){
        cout<< "\\ / "  <<endl;
        cout<< " X  "  <<endl;
        cout<< "/ \\" <<endl;

        return 0;
    }

    int line_i = n;
    int line_j = 1;
    int line_k = 1;

    for(int line=1; line<=n ;line++){
        if(line<=n/2){
            //col part 1 (outside spaces)
            if(line>1){
                for(int col=1; col<=line-1 ;col++){
                    cout<<" ";
                }
            }


            //col part 2 (\  )
            for(int col=n/2; col>=line ;col--){
                if(col==n/2){
                    cout<<"\\";
                }
                else{
                    cout<<" ";
                }
            }

            
            //col part 3 (   /)
            for(int col=line; col<=(n/2)+1 ;col++){
                if(col==(n/2)+1){
                    cout<<"/";
                }
                else{
                    cout<<" ";
                } 
            }
            cout<<endl;
        }
        else if(line==(n/2)+1){
            for(int col=1; col<=n/2 ;col++){
                cout<< " ";
            }
            cout<< "X" <<endl;
        }
        else{
            //col part 1 (outside spaces)
            if(line<=n){
                for(int col=line_i; col>(n/2)+2 ;col--){
                    cout<<" ";
                }
            }
            line_i--;


            //col part 2 (  /)
            for(int col=line; col<=n ;col++){
                if(col==line){
                    cout<<"/";
                }
            }

            //col part 3 (inside spaces)
            for(int col=1; col<=line_j ;col++){
                cout<<" ";
            }
            line_j+=2;

            
            //col part 4 (\   )
            for(int col=line_k; col>=1 ;col--){
                if(col==line_k){
                    cout<<"\\";
                }
                else{
                    cout<<" ";
                } 
            }
            cout<<endl;
        }
    }

    
    return 0;
}