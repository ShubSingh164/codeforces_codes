//Question Mark
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        // cout << s << endl;
        
        long long int ao = 0, bo = 0, co = 0, doc = 0, qo = 0; 
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                ao++;
            } else if (s[i] == 'B') {
                bo++;
            } else if (s[i] == 'C') {
                co++;
            } else if (s[i] == 'D') {
                doc++;
            } else {
                qo++;
            }
        }

        // Ensuring that the counts don't exceed n
        if (ao > n) ao = n;
        if (bo > n) bo = n;
        if (co > n) co = n;
        if (doc > n) doc = n;
        
        // Print occurrences of each character
        // cout << ao << " " << bo << " " << co << " " << doc << " " << qo << endl;
        cout << ao + bo + co + doc << endl;
    }

    return 0;
}
