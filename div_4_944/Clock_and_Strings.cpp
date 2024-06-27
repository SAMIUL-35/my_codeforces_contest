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
  ll t;
  cin>>t;
  while (t--)
  {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
     ll m = min(a, b);
        ll n = max(a, b);
        ll p = min(c, d);
        ll q = max(c, d);

    if (((p < m && m < q) && (p > n && n < q))||((p > m && m < q) && (p < n && n < q)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
  }
  


    return 0;
}