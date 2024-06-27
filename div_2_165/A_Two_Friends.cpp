#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of friends
        vector<int> p(n); // List of best friends

        // Input best friends
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        set<int> invited; 

        // Iterate through each friend
        for (int i = 0; i < n; ++i) {
            // Check if friend i and their best friend both received an invitation
            if (invited.find(i + 1) == invited.end() && invited.find(p[i]) == invited.end()) {
                // invited.insert(i + 1); // Add friend i to invited list
                invited.insert(p[i]); // Add friend's best friend to invited list
            }
        }

        // Print the minimum number of invitations needed
        cout << invited.size() << endl;
    }

    return 0;
}
