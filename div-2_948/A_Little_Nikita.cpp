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
  int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        
        if (m <= n && (n - m) % 2 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }


    return 0;
}