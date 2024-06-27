#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool is_palindrome(const string& s) {
    return equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
}

unordered_set<pair<int, int>, hash<pair<int, int>>> palindromic_cyclic_substrings(const string& S) {
    int n = S.length();
    unordered_set<pair<int, int>, hash<pair<int, int>>> palindromes;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 2; j < min(n + i, 2 * n); ++j) {
            int length = (j - i) % n;
            if (is_palindrome(S.substr(i, length)))
                palindromes.insert({i, length});
        }
    }

    return palindromes;
}

string determine_winner(const string& S) {
    auto palindromes = palindromic_cyclic_substrings(S);
    int total_palindromes = palindromes.size();

    if (total_palindromes % 2 == 1)
        return "Alice";
    else
        return "Bob";
}

int main() {
    string S = "101110";
    string winner = determine_winner(S);
    cout << winner << endl; // Output: Alice

    return 0;
}
