//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body() {
    int n;
    cin >> n;

    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> b[i];
    }

    sort(b.begin(), b.end()); // Sort B to process sums in order

    int A0 = 1; // Start with the smallest positive value for A[0]
    vector<int> a(n);
    bool valid = false;

    while (!valid) {
        a[0] = A0;
        valid = true;

        // Reconstruct the array A
        for (int i = 1; i < n; ++i) {
            a[i] = b[i - 1] - a[i - 1];
            if (a[i] <= 0) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            ++A0; // Increment A[0] and retry if invalid
        }
    }

    // Output the array A
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        body();
    }

    return 0;
}
