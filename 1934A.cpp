//To Min To Mix
#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    int j, k ,l, m;
    j = arr[0];
    k = arr[n - 2];
    l = arr[1];
    m = arr[n - 1];
    cout<<abs(j - k) + abs(k - l) + abs(l - m) + abs(m - j)<<endl;
    
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    
    return 0;
}
