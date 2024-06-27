#include <iostream>
#include <vector>

using namespace std;

vector<int> construct_xor(int N, int S) {
    // If the sum is odd or N > S, no valid array exists
    if (S % 2 != 0 || N > S) {
        return {-1};
    }

    vector<int> arr(N, 1); 

  
    int xor_sum = 0;
    for (int i = 1; i < S; ++i) {
        xor_sum ^= i;
    }

    arr[N - 1] += xor_sum ^ S; 

    return arr;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, S;
        cin >> N >> S;
        
        vector<int> result = construct_xor(N, S);
        if (result[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < N; ++i) {
                cout << result[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
