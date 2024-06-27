#include <iostream>
#include <vector>
using namespace std;

int find_kth_card(long long n, long long k) {
    vector<long long> odd_numbers;
    vector<long long> multiples_of_odd;

    // Generate all odd numbers up to n
    for (long long i = 1; i <= n; i += 2) {
        odd_numbers.push_back(i);
    }

    if (k <= odd_numbers.size()) {
        return odd_numbers[k - 1];
    }

    k -= odd_numbers.size();

    // Generate multiples of odd numbers up to n
    long long multiplier = 2;
    while (true) {
        for (long long odd : odd_numbers) {
            long long multiple = multiplier * odd;
            if (multiple > n) {
                break;
            }
            multiples_of_odd.push_back(multiple);
        }
        if (k <= multiples_of_odd.size()) {
            return multiples_of_odd[k - 1];
        }
        k -= multiples_of_odd.size();
        multiples_of_odd.clear();
        multiplier++;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        cout << find_kth_card(n, k) << endl;
    }
    return 0;
}
