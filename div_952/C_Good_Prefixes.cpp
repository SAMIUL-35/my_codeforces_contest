#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int max_positions(int x, int y, int z, long long k) {
    int max_positions = 0;
    
    // Iterate through all possible dimensions a, b, c
    for (int a = 1; a <= cbrt(k); ++a) {
        if (k % a == 0) {
            for (int b = 1; b <= sqrt(k / a); ++b) {
                if ((k / a) % b == 0) {
                    int c = (k / a) / b;
                    if (c > 0) {
                        // Check if the dimensions fit inside B
                        if (a <= x && b <= y && c <= z) {
                            int positions = (x - a + 1) * (y - b + 1) * (z - c + 1);
                            max_positions = max(max_positions, positions);
                        }
                        // Try permutations of (a, b, c)
                        if (a <= x && c <= y && b <= z) {
                            int positions = (x - a + 1) * (y - c + 1) * (z - b + 1);
                            max_positions = max(max_positions, positions);
                        }
                        if (b <= x && a <= y && c <= z) {
                            int positions = (x - b + 1) * (y - a + 1) * (z - c + 1);
                            max_positions = max(max_positions, positions);
                        }
                        if (b <= x && c <= y && a <= z) {
                            int positions = (x - b + 1) * (y - c + 1) * (z - a + 1);
                            max_positions = max(max_positions, positions);
                        }
                        if (c <= x && a <= y && b <= z) {
                            int positions = (x - c + 1) * (y - a + 1) * (z - b + 1);
                            max_positions = max(max_positions, positions);
                        }
                        if (c <= x && b <= y && a <= z) {
                            int positions = (x - c + 1) * (y - b + 1) * (z - a + 1);
                            max_positions = max(max_positions, positions);
                        }
                    }
                }
            }
        }
    }
    
    return max_positions;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    vector<int> results(t);
    
    for (int i = 0; i < t; ++i) {
        int x, y, z;
        long long k;
        cin >> x >> y >> z >> k;
        
        results[i] = max_positions(x, y, z, k);
    }
    
    for (int result : results) {
        cout << result << '\n';
    }
    
    return 0;
}
