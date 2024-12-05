#include <bits/stdc++.h>
using namespace std;

void body() {
    int n;
    long long x;
    cin >> n >> x;

    // {value, count}
    vector<pair<int, int>> coins(n); 
    for (int i = 0; i < n; i++) {
        cin >> coins[i].first;
    }
    for (int i = 0; i < n; i++) {
        cin >> coins[i].second;
    }

    // Sort coins by value in descending order
    sort(coins.rbegin(), coins.rend());

    long long sumCost = 0;
    int type = 0;

    for (int i = 0; i < n; i++) {
        if (sumCost >= x) break;

        long long value = coins[i].first;
        long long count = coins[i].second;

        long long maxCoins = min((x - sumCost + value - 1) / value, count);
        if (maxCoins > 0) {
            sumCost += maxCoins * value;
            type++;
        }

        // Debugging
        // cerr << "Value: " << value << ", Count: " << count << ", MaxCoins: " << maxCoins << ", SumCost: " << sumCost << '\n';
    }

    // Output result
    if (sumCost < x) {
        cout << -1 << '\n';
    } else {
        cout << type << '\n';
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
