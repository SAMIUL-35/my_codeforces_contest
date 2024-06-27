#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n";
#define no cout << "NO\n";


int main ()

{
op();
  ll t;
  cin>>t;
  while (t--)
  {
   ll x,y;
   cin>>x>>y;
   ll a=min(x,y);
   ll b=max(x,y);
   cout<<a<<" "<<b<<endl;
  }
  


    return 0;
}