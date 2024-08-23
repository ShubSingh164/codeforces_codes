// BITS++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int x = 0; 
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
// statement.find("++"): This function call searches for the substring "++" in the string statement.
// string::npos: This is a constant representing the value returned by find when the substring is not found. 
      // If "++" is found, find returns the index where it occurs; otherwise, it returns string::npos.
// != string::npos: This checks whether the substring "++" was found. If it wasn't, find would return string::npos, and the condition would be false.

        if (s.find("++") != string::npos) {
            x++;
        }

        else if (s.find("--") != string::npos) {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}
