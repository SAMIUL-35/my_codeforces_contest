#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
    
    
    ll cnt_z(ll z) {
    ll cnt = 0;
    while ((z & 1) == 0) {
        z >>= 1;
        cnt++;
    }
    return cnt;
}


int main ()

{
op();
  
ll t;
cin>>t;
while (t--)
{
    ll x,y;
    cin>>x>>y;
    int z = x ^ y;
    ll ans = 1 << cnt_z(z);
        cout<< ans<<endl;
}


    return 0;
}


