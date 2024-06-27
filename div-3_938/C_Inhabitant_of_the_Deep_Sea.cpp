#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> durability(n);
        for (long long i = 0; i < n; i++) {
            cin >> durability[i];
        }

        long long cnt = 0;
        long long x = (k % 2 == 1) ? k / 2 + 1 : k / 2;
        long long rx = k / 2;
        long long left = 0, right = n - 1;
        while (left <= right) {
            if (durability[left] <= x) {
                x -= durability[left];
                cnt++;
                left++;
            } else if (durability[right] <= rx) {
                rx -= durability[right];
                cnt++;
                right--;
            } else {
                break; 
            }
        }

        // Update rx if x becomes negative and rx is positive
        if (x < 0 && rx > 0) {
            rx = min(rx, -x);
            cnt += (k - x - rx); // Update cnt accordingly
        }

        cout << cnt << endl; 
    }

    return 0;
}
