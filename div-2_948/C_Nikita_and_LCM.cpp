#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

// Function to calculate the LCM of two numbers
long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        unordered_set<long long> elements;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            elements.insert(a[i]);
        }

       
        sort(a.begin(), a.end());

        int max_length = 0;

        
        for (int i = 0; i < n; ++i) {
            long long current_lcm = a[i];
            for (int j = i + 1; j < n; ++j) {
                current_lcm = lcm(current_lcm, a[j]);
                if (current_lcm > 1000000000) break;
                if (elements.find(current_lcm) == elements.end()) {
                    max_length = max(max_length, j - i + 1);
                }
            }
        }

        
        cout << max_length << '\n';
    }

    return 0;
}
