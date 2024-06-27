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
   ll n, m;
    cin >> n >> m;
    ll v[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    
     if (n > 1 && m == 1)
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (i == 0 && v[i][j] > v[i + 1][j])
                {
                    v[i][j] = v[i + 1][j];
                }
                else if (i == n - 1 && v[i][j] > v[i - 1][j])
                {
                    v[i][j] = v[i - 1][j];
                }
                else if (v[i][j] > v[i - 1][j] && v[i][j] > v[i + 1][j])
                {
                    v[i][j] = max(v[i + 1][j], v[i - 1][j]);
                }
            }
        }
    }
    else if (n == 1 && m > 1)
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (j == 0 && v[i][j] > v[i][j + 1])
                {
                    v[i][j] = v[i][j + 1];
                }
                else if (j == m - 1 && v[i][j] > v[i][j - 1])
                {
                    v[i][j] = v[i][j - 1];
                }
                else if (v[i][j] > v[i][j - 1] && v[i][j] > v[i][j + 1])
                {
                    v[i][j] = max(v[i][j + 1], v[i][j - 1]);
                }
            }
        }
    }
    else if (n > 1 && m > 1)
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (i == 0 && j == 0 && v[i][j] > v[i + 1][j] && v[i][j] > v[i][j + 1])
                {
                    v[i][j] = max(v[i + 1][j], v[i][j + 1]);
                }
                else if (i == n - 1 && j == m - 1 && v[i][j] > v[i - 1][j] && v[i][j] > v[i][j - 1])
                {
                    v[i][j] = max(v[i - 1][j], v[i][j - 1]);
                }
                else if (i == 0 && j == m - 1 && v[i][j] > v[i + 1][j] && v[i][j] > v[i][j - 1])
                {
                    v[i][j] = max(v[i + 1][j], v[i][j - 1]);
                }
                else if (i == n - 1 && j == 0 && v[i][j] > v[i - 1][j] && v[i][j] > v[i][j + 1])
                {
                    v[i][j] = max(v[i - 1][j], v[i][j + 1]);
                }
                else if (i == 0 && j > 0 && v[i][j] > v[i + 1][j] && v[i][j] > v[i][j - 1] && v[i][j] > v[i][j + 1])
                {
                    v[i][j] = max(max(v[i + 1][j], v[i][j - 1]), v[i][j + 1]);
                }
                else if (i > 0 && j == 0 && v[i][j] > v[i + 1][j] && v[i][j] > v[i - 1][j] && v[i][j] > v[i][j + 1])
                {
                    v[i][j] = max(max(v[i + 1][j], v[i - 1][j]), v[i][j + 1]);
                }
                else if (i == n - 1 && j > 0 && v[i][j] > v[i - 1][j] && v[i][j] > v[i][j + 1] && v[i][j] > v[i][j - 1])
                {
                    v[i][j] = max(max(v[i - 1][j], v[i][j + 1]), v[i][j - 1]);
                }
                else if (i > 0 && j == m - 1 && v[i][j] > v[i + 1][j] && v[i][j] > v[i - 1][j] && v[i][j] > v[i][j - 1])
                {
                    v[i][j] = max(max(v[i + 1][j], v[i - 1][j]), v[i][j - 1]);
                }
                else if (i > 0 && j > 0 && v[i][j] > v[i + 1][j] && v[i][j] > v[i - 1][j] && v[i][j] > v[i][j + 1] && v[i][j] > v[i][j - 1])
                {
                    v[i][j] = max(max(v[i + 1][j], v[i - 1][j]), max(v[i][j + 1], v[i][j - 1]));
                }
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }
  }
  


    return 0;
}