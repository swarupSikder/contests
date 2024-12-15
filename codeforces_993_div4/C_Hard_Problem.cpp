// Author: Swarup Sikder
// Judge: ...
// Problem: ...
#include <bits/stdc++.h>
using namespace std;

void body() {
    long long m,a,b,c;
    cin>> m >> a >> b >> c;

    long long row1_seat = min(m, a);
    long long row2_seat = min(m, b);
    long long row1_empty = m - row1_seat;
    long long row2_empty = m - row2_seat;
    long long c_seat = min(c, row1_empty + row2_empty);
    long long total_seated = row1_seat + row2_seat + c_seat;

    cout<< total_seated <<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        body();
    }
    return 0;
}
