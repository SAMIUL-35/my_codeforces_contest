#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll max_position(ll x, ll y, ll z, ll k) {
    ll ma = 0;
    

    for (ll i = 1; i <= cbrt(k); i++) {
        if (k % i == 0) {
            for (ll j = 1; j <= sqrt(k / i); j++) {
                if ((k / i) % j == 0) {
                    ll c = (k / i) / j;
                    if (c > 0) {
                        
                        if (i <= x && j <= y && c <= z) {
                            ll p = (x - i + 1) * (y - j + 1) * (z - c + 1);
                            ma = max(ma, p);
                        }
                       
                        if (i <= x && c <= y && j <= z) {
                            ll p = (x - i + 1) * (y - c + 1) * (z - j + 1);
                            ma = max(ma, p);
                        }
                        if (j <= x && i <= y && c <= z) {
                            ll p = (x - j + 1) * (y - i + 1) * (z - c + 1);
                            ma = max(ma, p);
                        }
                        if (j <= x && c <= y && i <= z) {
                            ll p = (x - j + 1) * (y - c + 1) * (z - i + 1);
                            ma = max(ma, p);
                        }
                        if (c <= x && i <= y && j <= z) {
                            ll p = (x - c + 1) * (y - i + 1) * (z - j + 1);
                            ma = max(ma, p);
                        }
                        if (c <= x && j <= y && i <= z) {
                            ll p = (x - c + 1) * (y - j + 1) * (z - i + 1);
                            ma = max(ma, p);
                        }
                    }
                }
            }
        }
    }
    
    return ma;
}

int main ()

{
op();
ll t;
cin>>t;
while (t--)
{
   ll x,y,z,k;
   cin>>x>>y>>z>>k;
ll ans=max_position(x,y,z,k);
cout<<ans<<endl;
}

  


    return 0;
}