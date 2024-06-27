#include <iostream>
#include <vector>
#include <limits>
#include <cstring>
using namespace std;

const int INF = numeric_limits<int>::max();

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        // Handle the case when n = 2 (no operations can be inserted)
        if (n == 2) {
            int result = (s[0] - '0') * (s[1] - '0');
            cout << result << endl;
            continue;
        }
        
        // Dynamic programming table
        vector<vector<int>> dp(n, vector<int>(n, 0));
        
        // Initialize dp[i][i] with the single digit value
        for (int i = 0; i < n; ++i) {
            dp[i][i] = s[i] - '0';
        }
        
        // Fill the dp table
        for (int len = 2; len <= n; ++len) { // length of substring
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                dp[i][j] = INF;
                for (int k = i; k < j; ++k) {
                    // Try both + and *
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j]);
                    dp[i][j] = min(dp[i][j], dp[i][k] * dp[k+1][j]);
                }
            }
        }
        
        // The answer for this test case is dp[0][n-1]
        cout << dp[0][n-1] << endl;
    }
    
    return 0;
}
