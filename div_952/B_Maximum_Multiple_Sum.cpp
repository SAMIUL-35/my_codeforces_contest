#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main() {
    op();

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll ans = 2;
        ll max_sum = 0;

        for (ll i = 2; i <= n; i++) {
            ll y = n / i;
            ll current_sum = i * (y * (y + 1)) / 2;

            if (current_sum > max_sum) {
                max_sum = current_sum;
                ans = i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
