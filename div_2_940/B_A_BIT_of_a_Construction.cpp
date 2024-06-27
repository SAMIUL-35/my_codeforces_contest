#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> result(n, 1); // Initialize all elements to 1
        result[n - 1] -= (n - 1); // Adjust the last element to make the sum equal to k
        // Output the sequence
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
