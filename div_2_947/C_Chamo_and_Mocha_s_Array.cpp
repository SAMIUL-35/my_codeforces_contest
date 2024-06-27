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
        vector<ll> a(n);
        ll ans=0;
        for (ll i = 0; i < n; i++) 
        {
            cin >> a[i];
            if(i%2==1)
            {
                ans = max(ans, a[i]);
            }
        }
        
        
        
       
       
       

        cout <<ans << endl; 
    }
    
    return 0;
}
