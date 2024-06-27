#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main () {
    op();
  
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        
        map<char,int> m;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }

        
        if (m.size() == 1) {
            cout << "NO" << endl;
        } else {
           
            cout << "YES" << endl;

           
           
            for (int i = 1; i <s.size(); i++)
            {
             
              cout<<s[i];
            }
            

           
            cout << s[0] << endl;
        }
    }

    return 0;
}
