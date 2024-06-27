#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        ll sum=0;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i]==2)sum++;
        }
        
      if(sum%8==0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
        
    }

    return 0;
}
