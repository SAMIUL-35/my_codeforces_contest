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
    string s;
    cin>>s;
     ll a = 0, b = 0, c = 0, d = 0;
        if (s[0] == '1') a = -10;  
        if (s[1] == '1') b = 10;   
        if (s[2] == '1') d = 10;  
        if (s[3] == '1') c = -10;  

        ll ans = (b - a + 1) * (d - c + 1);
        cout << ans << endl;
  }
  


    return 0;
}