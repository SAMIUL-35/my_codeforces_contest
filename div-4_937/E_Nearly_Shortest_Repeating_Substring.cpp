#include <iostream>
#include <string>
using namespace std;

// Function to check if s can be divided into segments of length k with at most one different character in each segment
bool can_form_segments(const string& s, int k) {
    int diff_segments = 0;
    for (int i = 0; i < s.length(); i += k) {
        string segment = s.substr(i, k);
        // Count the number of different characters in the segment
        char first_char = segment[0];
        for (char c : segment) {
            if (c != first_char) {
                ++diff_segments;
                break;
            }
        }
        // If there are more than one different segment, return false
        if (diff_segments > 1) {
            return false;
        }
    }
    // If all segments have at most one different character, return true
    return true;
}

// Function to find the length of the shortest string k satisfying the conditions
int shortest_repeating_substring(const string& s) {
    int n = s.length();
    // Iterate through all possible lengths of k from 1 to n
    for (int length = 1; length <= n; ++length) {
        // Check if n is divisible by length
        if (n % length == 0) {
            // If s can be divided into segments of length k with at most one different character in each segment, return the length of k
            if (can_form_segments(s, length)) {
                return length;
            }
        }
    }
    // If no suitable k is found, return n
    return n;
}

int main() {
    int t;
    cin >> t; // Input number of test cases
    
    // Iterate through each test case
    while (t--) {
        int n;
        cin >> n; // Input the length of string s
        string s;
        cin >> s; // Input the string s
        int result = shortest_repeating_substring(s); // Find the length of the shortest string k
        cout << result << endl; // Output the result
    }
    return 0;
}
