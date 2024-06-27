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
    ll n;
    cin>>n;
    vector<ll>a(n),b(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    unordered_map<ll,ll>cnt;
    for (ll i = 0; i < n; i++)
    {
        cin>>b[i];
        cnt[b[i]]++;
    }
    ll m;
    cin>>m;
    vector<ll>d(m);
    unordered_map<ll,ll>cnt_d;
    for (ll i = 0; i < m; i++)
    {
       cin>>d[i];
       cnt_d[d[i]]++;
    }
    
  
  
  bool ok=true;
  
        if (cnt.find(d[m-1]) == cnt.end())
        {
            ok = false;
        }
 
 for ( auto k : cnt) {
        if (cnt_d.find(k.first) == cnt_d.end() || cnt_d[k.first] < k.second) {
           ok=false;
           break;
        }
    }
 
    
    for (ll i = 0; i < n; i++) {
        if (b[i] != a[i] && cnt_d.find(b[i]) == cnt_d.end()) {
            ok =false ;
            break;
        }
    }
if(ok)cout<<"YES"<<endl;
else cout<<"NO"<<endl;}
    return 0;
}