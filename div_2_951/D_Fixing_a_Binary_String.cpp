#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
bool isValidPrefix(const string& s, int k, char target) {
    for (int i = 0; i < k; ++i) {
        if (s[i] != target) return false;
    }
    return true;
}

int findP(const string& s, int n, int k, char target) {
    // We will check each possible p from 1 to n
    for (int p = 1; p <= n; ++p) {
        string t = s.substr(p-1) + s.substr(0, p-1);
        reverse(t.begin(), t.begin() + p);

        bool valid = true;
        for (int i = 0; i < n; ++i) {
            if ((i % k == 0 && t[i] != target) || (i % k != 0 && t[i] == target)) {
                valid = false;
                break;
            }
        }
        
        if (valid) return p;
    }
    return -1;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int p0 = findP(s, n, k, '0');
        int p1 = findP(s, n, k, '1');

        if (p0 != -1) {
            cout << p0 << endl;
        } else if (p1 != -1) {
            cout << p1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
