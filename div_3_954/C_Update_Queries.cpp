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
  ll t;cin>>t;
  while (t--)
  {
    ll n, m;
    cin >> n >> m;
    string k;
    cin >> k;
    set<ll> x;
    while (m--)
    {
        ll a;
        cin >> a;
        x.insert(a);
    }
    
    string l;
    cin >> l;
    sort(l.begin(), l.end());
    ll it = 0;
    for (auto y : x)
    {
        k[y - 1] = l[it];
        it++;
    }
    cout << k << endl;
  }
  


    return 0;
}