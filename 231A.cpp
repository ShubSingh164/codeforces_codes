//231A-Team.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int sum = 0;

    while(t--) {
        int p, v, tt;
        cin >> p >> v >> tt;

        if ((p == 1 && v == 1) || (p == 1 && tt == 1) || (v == 1 && tt == 1)) {
            sum++;
        }
    }
    cout << sum << endl;  
    return 0;
}
