#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    op();
    ll t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        int total = n + m + 1;
        vector<ll> a(total), b(total);
        
        for (int i = 0; i < total; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < total; ++i) {
            cin >> b[i];
        }
        
        vector<tuple<ll, ll, int>> candidates;
        for (int i = 0; i < total; ++i) {
            candidates.push_back({a[i], b[i], i});
        }
        
        sort(candidates.begin(), candidates.end(), [](const auto &left, const auto &right) {
            return (get<0>(left) - get<1>(left)) > (get<0>(right) - get<1>(right));
        });
        
        vector<ll> programmer_prefix(total + 1, 0), tester_prefix(total + 1, 0);
        for (int i = 0; i < total; ++i) {
            programmer_prefix[i + 1] = programmer_prefix[i] + get<0>(candidates[i]);
            tester_prefix[i + 1] = tester_prefix[i] + get<1>(candidates[i]);
        }
        
        vector<ll> result(total, 0);
        
        for (int i = 0; i < total; ++i) {
            int idx = get<2>(candidates[i]);
            ll programming_skill = 0, testing_skill = 0;
            
            if (i < n) {
                programming_skill = programmer_prefix[n] - get<0>(candidates[i]) + programmer_prefix[total] - programmer_prefix[n + 1];
                testing_skill = tester_prefix[m];
            } else if (i < total - m) {
                programming_skill = programmer_prefix[n];
                testing_skill = tester_prefix[m];
            } else {
                programming_skill = programmer_prefix[n];
                testing_skill = tester_prefix[m] - get<1>(candidates[i]) + tester_prefix[total] - tester_prefix[m + 1];
            }
            
            result[idx] = programming_skill + testing_skill;
        }
        
        for (int i = 0; i < total; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
