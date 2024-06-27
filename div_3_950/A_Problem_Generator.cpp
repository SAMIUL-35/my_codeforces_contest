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
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        
        unordered_map<char, ll> p;
        for (char c : s) {
            p[c]++;
        }

       
        ll ans = 0;
        for (char i = 'A'; i <= 'G'; i++) {
            if (p[i] < m) {
                ans += (m - p[i]);
            }
        }

   
        cout << ans << endl;
    }

    return 0;
}
