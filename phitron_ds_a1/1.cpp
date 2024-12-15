#include <bits/stdc++.h>
using namespace std;

int searchItem(int n, int val, vector<int> &a, int countDuplicate){
    
    
    //binary search
    int low_idx = 0, high_idx=n-1;

    while(low_idx<=high_idx){
        int mid_idx = (low_idx+high_idx)/2;

        if(a[mid_idx]==val){
            countDuplicate++;
            break;
        }
        else if(a[mid_idx] < val){
            low_idx = mid_idx+1;
        }
        else{
            high_idx = mid_idx-1;
        }
    }


    return countDuplicate;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i=0; i<n ;i++) {
        cin>> a[i];
    }

    int countDuplicate;

    //flag
    bool flag = false;

    //O(NlogN)
    for(int i=0; i<n-1 ;i++){
        //i will pass a such kind of array
        //that will not have a[i]
        vector<int> b(n);
        b=a;
        b.erase(b.begin()+i);
        b.resize(n-1);

        // for(int i=0; i<b.size() ;i++){
        //     cout<< b[i] <<" ";
        // }
        // cout<<endl;


        countDuplicate = searchItem(b.size(), a[i], b, 0);
        //cout<< countDuplicate <<endl;
        if(countDuplicate==1){
            flag = true;
            break;
        }
    }

    
    (flag)? std::cout<< "YES" <<endl : std::cout<< "NO" <<endl;

    return 0;
}
