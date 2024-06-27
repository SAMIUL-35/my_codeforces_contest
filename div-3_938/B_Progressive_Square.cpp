#include <iostream>
#include <vector>

using namespace std;

bool can_construct_progressive_square(int n, int c, int d, vector<int>& elements) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    matrix[0][0] = elements[0];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 && j == 0)
                continue;
            if (i == 0)
                matrix[i][j] = matrix[i][j-1] + d;
            else if (j == 0)
                matrix[i][j] = matrix[i-1][j] + c;
            else {
                if (matrix[i][j-1] + d != matrix[i-1][j] + c)
                    return false;
                matrix[i][j] = matrix[i][j-1] + d;
            }
        }
    }
    
    int index = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] != elements[index])
                return false;
            ++index;
        }
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> elements(n * n);
        for (int i = 0; i < n * n; ++i)
            cin >> elements[i];
        
        if (can_construct_progressive_square(n, c, d, elements))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
