#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


pair<ll, ll> find_cen(ll n, ll m, vector<string> v) {
    vector<ll> x, y;

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (v[i][j] == '#') {
                x.push_back(i + 1);
                y.push_back(j + 1);
            }
        }
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    ll center_x = x[x.size() / 2];
    ll center_y = y[y.size() / 2];

    return {center_x, center_y};
}

int main() {
    op();
    ll t;
    cin >> t;

   while (t--)
   {
    ll n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        pair<ll, ll> x= find_cen(n, m, v);
        cout << x.first << " " << x.second << endl;
   }
   
    return 0;
}
