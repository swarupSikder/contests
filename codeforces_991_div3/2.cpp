#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        // Check if the sum is divisible by n
        if (sum % n != 0) {
            cout << "NO\n";
            continue;
        }

        long long target = sum / n;
        long long carry = 0; // Tracks surplus or deficit carried forward
        bool possible = true;

        for (int i = 0; i < n; i++) {
            carry += a[i] - target; // Calculate the running surplus/deficit
            if (carry < 0) {
                possible = false; // If carry goes negative at any point, redistribution is not possible
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
