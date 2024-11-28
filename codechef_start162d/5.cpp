#include <iostream>
#include <string>
using namespace std;

// Function to calculate minimum operations for a given string
int min_operations(const string& S) {
    int operations = 1; // At least one operation is needed
    char last_char = S[0]; // Initialize with the first character

    for (size_t i = 1; i < S.length(); ++i) {
        if (S[i] != last_char) {
            // New group starts when the character changes
            operations++;
            last_char = S[i];
        }
    }

    return operations;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Length of the string
        string S;
        cin >> S;

        // Output the minimum number of operations for this test case
        cout << min_operations(S) << "\n";
    }

    return 0;
}
