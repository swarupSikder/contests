#include <bits/stdc++.h>
using namespace std;

void body() {
    int n;
    long long x;
    cin >> n >> x;

    vector<pair<int, int>> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i].first; // Coin value
    }
    for (int i = 0; i < n; i++) {
        cin >> coins[i].second; // Coin count
    }

    // Sort coins by value in descending order
    sort(coins.rbegin(), coins.rend());

    long long remainingCost = x;
    int distinctTypesUsed = 0;

    for (int i = 0; i < n && remainingCost > 0; i++) {
        long long value = coins[i].first;
        long long count = coins[i].second;

        // Maximum coins we can use of this type
        long long maxCoins = min(remainingCost / value, (long long)count);

        if (maxCoins > 0) {
            remainingCost -= maxCoins * value;
            distinctTypesUsed++;
        }
    }

    // If remainingCost > 0, it's impossible to buy the item
    if (remainingCost > 0) {
        cout << -1 << endl;
    } else {
        cout << distinctTypesUsed << endl;
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
