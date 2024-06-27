#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to check if two digits can sum up to a given number
bool is_valid_sum(int num) {
    return (num >= 10 && num <= 18);
}

// Function to check if the number can be expressed as the sum of two large integers
bool can_be_expressed_as_sum(const string& x) {
    for (char ch : x) {
        int digit = ch - '0';
        if (!is_valid_sum(digit)) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    vector<string> results;
    results.reserve(t);

    for (int i = 0; i < t; ++i) {
        string x;
        cin >> x;
        if (can_be_expressed_as_sum(x)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
