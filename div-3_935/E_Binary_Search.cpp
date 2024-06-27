#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n, x;
        cin >> n >> x; // Length of permutation and number to be found
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i]; // Permutation
        }
        
        // Find the position of x in the permutation before sorting
        auto pos_x = find(p.begin(), p.end(), x) - p.begin() + 1;
        
        vector<pair<int, int>> operations; // Vector to store swap operations
        
        if (pos_x == 1) {
            cout << 0 << endl;
        } else {
            if (pos_x == n) { // If x is at r, swap it with p[l]
                operations.push_back({pos_x, 1});
                swap(p[pos_x - 1], p[0]);
                pos_x = 1;
            } else { // Otherwise, swap x with p[l] and then swap p[pos_x + 1] with p[r]
                operations.push_back({pos_x, 1});
                swap(p[pos_x - 1], p[0]);
                operations.push_back({pos_x + 1, n});
                swap(p[pos_x], p[n - 1]);
                pos_x = 1;
            }
            cout << operations.size() << endl;
            for (auto op : operations) {
                cout << op.first << " " << op.second << endl;
            }
        }
    }
    return 0;
}
