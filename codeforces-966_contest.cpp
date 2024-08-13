//code for queston B
#include <bits/stdc++.h>
using namespace std;
bool valid(const vector<int>& a) {
    int n = a.size();
    set<int> occ;
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            occ.insert(a[i]);
        } else {
 
            if (occ.count(a[i] - 1) == 0 && occ.count(a[i] + 1) == 0 && !occ.empty()) {
                return false;
            }
            occ.insert(a[i]);
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (valid(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}



// code for question C - numeric string templete
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

bool match(const vector<int>& a, const string& s) {
    if (a.size() != s.length()) return false;
    
    unordered_map<int, char> num;
    unordered_map<char, int> chars;
    
    for (int i = 0; i < a.size(); i++) {
        if (num.count(a[i]) && num[a[i]] != s[i]) return false;
        if (chars.count(s[i]) && chars[s[i]] != a[i]) return false;
        
        num[a[i]] = s[i];
        chars[s[i]] = a[i];
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int m;
        cin >> m;
        
        for (int i = 0; i < m; i++) {
            string s;
            cin >> s;
            
            if (match(a, s)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}



// code for question A - Primary Task 
#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;

    if (s.length() >= 3) {
 
        if (s.substr(0, 2) == "10" && (s[2] >= '2' || (s.length() >= 4 && s[2] >= '1'))) {
            cout << "YES" << '\n';
            return;
        }
    }

    cout << "NO" << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}





