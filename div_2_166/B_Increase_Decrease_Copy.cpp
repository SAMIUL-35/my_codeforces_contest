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
  op();
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v1(n), v2(n + 1);

        for (ll i = 0; i < n; i++) {
            cin >> v1[i];
        }
        for (ll i = 0; i <= n; i++) {
            cin >> v2[i];
        }
       
   
       

        ll ans = 0;
     
        for (ll i = 0; i < n; i++) {
            ans += abs(v1[i] - v2[i]);
        }
        ll r = 0;
    ll cnt1 =LLONG_MAX, cnt2=LLONG_MAX;
    for(ll i=0; i<n; i++){
        if(v1[i] == v2[n]){
            ans++;
            r = 0;
            break;
        }
       else if(v2[n] >= min(v1[i],v2[i]) && v2[n] <= max(v1[i],v2[i])){
            ans++;
            r = 0;
            break;
        } else{
            ll q = abs(v2[n] - v1[i]);
            cnt1 = min(cnt1,q);
            ll k = abs(v2[n] - v2[i]);
            cnt2 = min(cnt2, k);
            r = min(cnt1,cnt2);
            r++;
        }
    }
    ll result=ans+r;
    cout<<result<<endl;
    }


    return 0;
}