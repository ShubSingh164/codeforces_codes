//1154A-Restoring_three_number
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    vector<int> arr(n);  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int a = arr[3] - arr[2];
     int b = abs(a - arr[0]);
     int c = abs(b - arr[2]);
     cout<< a<<" "<<b<<" " <<c<< endl; 
 
    
    return 0;
}
