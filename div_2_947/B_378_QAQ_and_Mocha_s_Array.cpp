#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll m1 = LLONG_MAX, m2 = LLONG_MAX;
        for (ll i = 0; i < n; i++) {
            if (a[i] < m1) {
                m1 = a[i];
            } 
            }
        
        
        vector<ll> c;
        for (ll i = 0; i < n; i++) {
            if (a[i] % m1 != 0) {
                c.push_back(a[i]);
                if(a[i]<m2)
                {
                    m2=a[i];
                }
            }
        }
        
        bool ok = true;
        // cout<<m2<<endl;
        if (c.size() > 0) 
        {             for (auto i = 0; i <c.size(); i++) {
                if (c[i] % m2 != 0) {
                    ok = false;
                    break;
                }
            }
        }
        
        if (ok) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
