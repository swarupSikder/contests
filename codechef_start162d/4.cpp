#include <bits/stdc++.h>
using namespace std;

void body() {
    int n, k;
    cin >> n >> k;

    // If K == 1, it's impossible to create a valid permutation
    if (k == 1) {
        cout << -1 << endl;
        return;
    }

    // Initialize the array
    vector<int> a(n);
    iota(a.begin(), a.end(), 1); // Fill with [1, 2, ..., n]

    // Process blocks of size K
    for (int i = 0; i + k <= n; i += k) {
        rotate(a.begin() + i, a.begin() + i + 1, a.begin() + i + k);
    }

    // Handle the leftover block if N % K != 0
    int rem = n % k;
    if (rem > 0) {
        int start = n - rem;

        // If rem == 1, it's impossible to satisfy the modular condition
        if (rem == 1) {
            cout << -1 << endl;
            return;
        }

        // Rotate the leftover block to avoid modular conflicts
        rotate(a.begin() + start, a.begin() + start + 1, a.end());

        // Validate the leftover block
        for (int i = start; i < n; ++i) {
            if (a[i] % k == (i + 1) % k) {
                cout << -1 << endl;
                return;
            }
        }
    }

    // Output the permutation
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        body();
    }
    return 0;
}
