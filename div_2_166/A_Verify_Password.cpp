#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


bool is_strong( string s) {
    vector<char> a;
    vector<char> d;

    
    for (char c : s) {
        if (isdigit(c)) {
            d.push_back(c);
        } else if (isalpha(c)) {
            a.push_back(c);
        }
    }

    
    if (!is_sorted(d.begin(), d.end())) {
        return false;
    }

    
    if (!is_sorted(a.begin(), a.end())) {
        return false;
    }

    
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            
            for (int j = i + 1; j < s.size(); j++) {
                if (isdigit(s[j])) {
                    return false;
                }
            }
            break; 
        }
    }

    return true;
}

int main() {
    op();
    int t;
    cin >> t;


    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (is_strong(s)) {
             cout<<"YES"<<endl;
           
        } else {
             cout<<"NO"<<endl;
        }
    }
return 0;
}