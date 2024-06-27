#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


bool isSorted( vector<ll> v) {
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] < v[i - 1]) {
            return false;
        }
    }
    return true;
}


bool sorted( vector<ll> a) {
    int n = a.size();
    for (ll i = 0; i < n; i++) {
       
        vector<ll> r(n);
        for (int j = 0; j < n; j++) {
            r[j] = a[(i + j) % n];
        }
        
        if (isSorted(r)) {
            return true;
        }
    }
    return false;
}

int main() {
    op();
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; ++i) {
            cin >> v[i];
        }
        if (sorted(v)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
