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
        vector<int> a(n);
       
        for (int i = 0; i < n; i++) {
            cin >> a[i];
           
        }
       
        int cnt = 0;

        vector<vector<int>> v;
        for (int i = 0; i < n - 2; i++) {
            vector<int> s;
            s.push_back(a[i]);
            s.push_back(a[i+1]);
            s.push_back(a[i+2]);
            v.push_back(s);
        }

        for (int i = 0; i < v.size(); i++) {
            for (int j = i + 1; j < v.size(); j++) {
               
                if ((v[i][0] == v[j][0] && v[i][1] == v[j][1] && v[i][2] != v[j][2]) ||
                    (v[i][0] == v[j][0] && v[i][1] != v[j][1] && v[i][2] == v[j][2]) ||
                    (v[i][0] != v[j][0] && v[i][1] == v[j][1] && v[i][2] == v[j][2])) {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
