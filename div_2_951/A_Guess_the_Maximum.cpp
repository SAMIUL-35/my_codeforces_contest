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
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll ans=LLONG_MAX;
    ll sum=0;
    for (ll i = 0; i < n-1; i++)
    {
       sum=max(v[i],v[i+1]);
       ans=min(ans,sum); 
    }
    cout<<ans-1<<endl;
  }
  


    return 0;
}