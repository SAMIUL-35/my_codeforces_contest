#include <bits/stdc++.h>

using namespace std;


long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    cin >> t;
   while (t--)
   {
    
        long long a ,b,m;
        cin>>a>>b>>m;
                
        long long lcm_ab = lcm(a, b);
        long long last_simultaneous = lcm_ab - m;
        
        long long fireworks = m / a + m / b - 1;
        if (m >= lcm_ab) {
            fireworks+=3;
        } else if (last_simultaneous > 0) {
            fireworks += 3;
        }
        
        cout << fireworks << endl;
    }
   
   

    

    return 0;
}
