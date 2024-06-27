#include <bits/stdc++.h>
#define ll                    long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll, ll> f;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            f[v[i]]++;
        }
        ll ans = 0;
        for (ll i = 1; i <= n; i++) {
            ans += floor(f[i] / 3);
        }
        cout << ans << endl;
    }
  
    return 0;
}
