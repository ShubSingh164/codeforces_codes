// 1915C Can I Square?



correct accepeted code:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
   
        long long sum = accumulate(arr.begin(), arr.end(), 0LL);

        long long sqrtSum = (long long)sqrt(sum);
    
        if (sqrtSum * sqrtSum == sum) {
            cout << "YES\n";  
        } else {
            cout << "NO\n";   
        }
    }
    return 0;
}

code which failed on 3rd testcase.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int a = accumulate(arr.begin(), arr.end(), 0);

        float b = sqrt(a);
    
        if (b == floor(b)) {
            cout << "YES\n";  
        } else {
            cout << "NO\n";   
        }
    }
    return 0;
}
