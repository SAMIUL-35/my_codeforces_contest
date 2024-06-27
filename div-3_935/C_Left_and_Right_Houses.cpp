#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int position_to_lay_road(int n, string& a) {
    int total_zeros = 0;
    for (char c : a) {
        if (c == '0') total_zeros++;
    }
    int half_zeros = max(1, (int)ceil(total_zeros / 2.0)); // Ensure half_zeros is at least 1

    int left_zeros = 0;
    int right_zeros = total_zeros;
    for (int i = 0; i < n; ++i) {
        if (i > 0 && left_zeros >= half_zeros && right_zeros >= half_zeros) {
            return i;
        }
        if (a[i] == '0') {
            left_zeros++;
            right_zeros--;
        }
    }

    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        cout << position_to_lay_road(n, a) << endl;
    }
    return 0;
}
