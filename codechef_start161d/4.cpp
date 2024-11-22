#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Sort the array of recommended temperatures
        sort(A.begin(), A.end());
        
        // The minimum unsavoriness is determined by the difference between two extreme elements
        // in the divided segments
        int minUnsavoriness = A[N-1] - A[0];

        for (int i = 0; i < N; i++) {
            if (i + K + 1 < N) {
                minUnsavoriness = min(minUnsavoriness, A[i + K + 1] - A[i]);
            }
        }

        cout << minUnsavoriness << endl;
    }
    return 0;
}
