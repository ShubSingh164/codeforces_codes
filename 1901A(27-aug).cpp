#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxi = max(arr[0],( x - arr[n-1])*2);
        for (int i = 1; i < n; i++) {
            maxi = max(maxi, arr[i] - arr[i-1]);
        }

        cout << maxi << endl;
    }
    return 0;
}
