#include <bits/stdc++.h>

using namespace std;

bool isBinaryDecimal(int x) {
    
    while (x > 0) {
        int digit = x % 10;
        if (digit != 0 && digit != 1)
            return false;
        x /= 10;
    }
    return true;
}

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return (root * root == n);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool possible = false;
    
            for (int i = 1; i * i <= n; i++) {
                if (n % i == 0 && isBinaryDecimal(i) && isBinaryDecimal(n / i)) {
                    possible = true;
                    break;
                }
            }
    
if (isPerfectSquare(n)) {
            int n=isPerfectSquare(n);
            for (int i = 1; i * i <= n; i++) {
                if (n % i == 0 && isBinaryDecimal(i) && isBinaryDecimal(n / i)) {
                    possible = true;
                    break;
                }
            }
        } 
        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
