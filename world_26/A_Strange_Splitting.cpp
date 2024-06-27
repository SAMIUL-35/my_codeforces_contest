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
  
ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (v[0] == v[n - 1])
    {
        cout << "NO" << endl;
        
    }
    cout << "YES" << endl;
     
    for (int i = 0; i < n - 1; i++)
    {
        cout << "R";
    }
   
    cout << endl;

    return 0;
}