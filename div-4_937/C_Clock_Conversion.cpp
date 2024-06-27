#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string ti;
        cin >> ti;
        
        int hour = (ti[0] - '0') * 10 + (ti[1] - '0');
        int minute = (ti[3] - '0') * 10 + (ti[4] - '0');

        string period = (hour < 12) ? "AM" : "PM";

        if (hour == 0)
            hour = 12;
        else if (hour > 12)
            hour -= 12;

        cout << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period << endl;
    }

    return 0;
}