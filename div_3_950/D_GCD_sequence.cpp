#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

bool is_non_decreasing(const vector<int>& b) {
    for (int i = 1; i < b.size(); ++i) {
        if (b[i] < b[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Calculate the GCD-sequence b
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            b[i] = gcd(a[i], a[i + 1]);
        }

        // Check if removing any element results in a non-decreasing GCD-sequence
        for (int i = 0; i < n; ++i) {
            vector<int> b_prime;
            if (i > 0) {
                b_prime.push_back(gcd(a[i - 1], a[i + 1]));
            }
            if (i < n - 1) {
                b_prime.push_back(gcd(a[i], a[i + 1]));
            }
            if (is_non_decreasing(b_prime)) {
                cout << "YES\n";
                break;
            }
        }

        if (t > 0) {
            cin.ignore(); // Ignore newline between test cases
        }
    }
    return 0;
}
