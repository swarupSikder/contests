//author:   Swarup Sikder
//judge:    CodeChef
//problem:  4
#include <bits/stdc++.h>
using namespace std;

void body() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for(int i=0; i<n ;i++) {
        cin>>a[i];
    }

    long long sum = 0;              // Tracks the total sum of floor(A[i] / K)
    long long adjustments = 0;      // Tracks how many +1 adjustments are needed (ceil - floor)

    for(int i=0; i<n ;i++){
        long long floorValue= a[i]/k;
        long long remainder= a[i]%k;

        if(remainder<0){
            remainder += k;         // Handle negative remainders
        } 

        // Calculate ceil(A[i] / K) when remainder > 0
        long long ceilValue = (remainder > 0) ? floorValue + 1 : floorValue;

        sum += floorValue;
        adjustments += (remainder > 0); // Count how many ceilings were used
    }

    // To balance to 0, adjustments (ceil - floor contributions) must cancel out the sum
    if((sum+adjustments)%2==0){
        cout<< "YES" <<endl;
    } 
    else{
        cout<< "NO" <<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        body();
    }

    return 0;
}
