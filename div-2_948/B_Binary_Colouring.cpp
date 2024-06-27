#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
 
int main() {
    op();
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
 
        int c = 1;
        while (c < x) {
            c *= 2;
        }
 
        vector<int> f(32);
        vector<int> g(32);
        int y = c;
        int i=0;
        while (y > 0) {
            
            f.push_back(y & 1); 
            y >>= 1; 
             }          
       
        int d = c - x;
        // cout << d << endl;
 
        int s = d;
        while (s > 0) {
            g.push_back(s & 1); 
            s >>= 1;            }
        
        
        // reverse(g.begin(),g.end());
        // reverse(f.begin(),f.end());
        for (int i = 0; i < 32; i++) {
            if (g[i] == 1) {
                f[i] = -1;
            }
        }
        
        cout << 32 << endl;
        for (int i = 0; i < 32; i++)
        {
           cout<<f[i]<<" ";
        }
        
 
        cout << "\n";
}
 
    return 0;
}