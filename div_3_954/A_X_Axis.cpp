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
    ll x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        
   
        ll y[3] = {x1, x2, x3};
        sort(y, y + 3);
        
        
        ll m = y[1];
        
        
        ll ans = abs(m - x1) + abs(m - x2) + abs(m - x3);
        
        
        cout << ans << endl;
   }
   


    return 0;
}