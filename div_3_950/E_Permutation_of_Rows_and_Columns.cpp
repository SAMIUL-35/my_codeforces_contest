#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_inversions(vector<vector<int>>& matrix) {
    vector<int> flattened_matrix;
    for (auto& row : matrix) {
        flattened_matrix.insert(flattened_matrix.end(), row.begin(), row.end());
    }
    int inversions = 0;
    int n = flattened_matrix.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (flattened_matrix[i] > flattened_matrix[j]) {
                ++inversions;
            }
        }
    }
    return inversions;
}

string can_transform(vector<vector<int>>& matrix_a, vector<vector<int>>& matrix_b) {
    int inversions_a = count_inversions(matrix_a);
    int inversions_b = count_inversions(matrix_b);

    if (inversions_a % 2 != inversions_b % 2) {
        return "NO";
    }

    int size_a = matrix_a.size();
    int size_b = matrix_b.size();

    if (size_a % 2 != size_b % 2) {
        return "NO";
    }

    return "YES";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix_a(n, vector<int>(m));
        vector<vector<int>> matrix_b(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix_a[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix_b[i][j];
            }
        }
        cout << can_transform(matrix_a, matrix_b) << endl;
    }
    return 0;
}
