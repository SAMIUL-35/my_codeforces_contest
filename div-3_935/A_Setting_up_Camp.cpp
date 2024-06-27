#include <bits/stdc++.h>

using namespace std;



int minTents(int a, int b, int c) {
    int totalTents = 0;
    
    
    totalTents += a;
    
    
    if (b % 3 == 0) {
        totalTents += b / 3;
    } else {
        int need = 3 - (b % 3);
        if (c >= need) {
            b += need;
            totalTents += b / 3;
            c -= need;
        } else {
            return -1; 
        }
    }
    
    
    totalTents += c / 3;
    if (c % 3 != 0) {
        totalTents += 1;
    }
    
    
    return totalTents;
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << minTents(a, b, c) << endl;
    }
    
    return 0;
}

