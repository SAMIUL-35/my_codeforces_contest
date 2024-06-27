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
    ll m, n;
    cin >> m >> n;
    vector<ll>x(n),y(n);
    
    for(ll i=0; i<n; i++)
    {
        cin >> x[i];
      
    }
    for(ll i=0; i<n; i++)
    {
        cin >> y[i];
    }
    
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
      sum += x[i];
    }
    if(sum >= m)
    {
        cout << "1" << endl;
       continue;
    }
    
    ll i =1, j=1e18, ans = 0;
    while(i<=j)
    {
        ll mid = (i+j)/2;
        ll w = sum;
        for(ll i=0; i<n; i++)
        {
            ll q = (mid - 1)/y[i];
            ll y = q*x[i];
            w += y;
        }
        if(w < m)
        {
             i = mid + 1;
        }
        else
        {
            ans = mid;
            j = mid -1;
           
        }
    }
    cout << ans << endl;
  }
  


    return 0;
}