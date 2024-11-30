#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int tc;
cin>>tc;
while(tc--){
    int n,k;
    cin>>n>>k;
    int l=0;
    if(k==1 || (n%2==1 && k==2)){
        cout<<-1<<endl;
    }
    else{
        if(n%2==0){
            for(int i=0;i<n;i++){
                cout<<i+2<<" "<<i+1<<" ";
                i++;
            }}
            else{
                if(n>=3){
                    cout<<3<<" ";
                    cout<<1<<" ";
                    cout<<2<<" ";
                    for(int i=3;i<n;i++){
                        cout<<i+2<<" "<<i+1<<" ";
                        i++;
                    }
                }
                else{
                    cout<<1<<endl;
                }
                
            }
            cout<<endl;
            
        }
    
    
    

}
    
}