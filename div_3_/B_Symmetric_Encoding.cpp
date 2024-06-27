#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    op();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        
        set<char> c(b.begin(), b.end());
        string r(c.begin(), c.end());
        
        
        int len = r.length();
        unordered_map<char, char> d;
        for (int i = 0; i < len; i++) {
            d[r[i]] = r[len - i - 1];
        }

      
        string s = b;
        for (int i = 0; i < n; i++) {
            s[i] = d[b[i]];
        }

       
        cout << s << endl;
    }
    return 0;
}
