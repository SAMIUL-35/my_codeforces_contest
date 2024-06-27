#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main ()
{
    op();
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll sum = 0;

        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        if (sum % 2 == 0) {
             cout << n << endl;
        } else {
            
            ll first = -1, last = -1;
            for (ll i = 0; i < n; i++) {
                if (v[i] % 2 != 0) {
                    if (first == -1) {
                        first = i;
                    }
                    last = i;
                }
            }
            
            cout << max(n - first - 1, last) << endl;
        }
    }

    return 0;
}
