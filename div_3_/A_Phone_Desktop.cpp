#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    op();
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (m % 2 == 1) {
            int x = ceil(m /2.0);
            int k = 7 * x + 4;
            int s = n - k;
            if (s > 0) {
                int a = ceil(s / 15.0);  
                x += a;
            }
            cout << x << endl;
        } else {
            int x = m / 2;
            int k = 7 * x;
            int s = n - k;
            if (s > 0) {
                int a = ceil(s / 15.0);  
                x += a;
            }
            cout << x << endl;
        }
    }
    return 0;
}
