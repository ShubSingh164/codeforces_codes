//My approach.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       int x;
       cin>>x;
       
      int a = x % 10;
        int n = 0;
    while (x > 0) {
        n++;
        x /= 10;
    }
    if (n % 4 == 1){
        cout<< 10 * (a - 1) + 1 <<endl;
    }else if (n % 4 == 2 ){
        cout<< 10 * (a - 1) + 3 <<endl;
    }else if(n % 4 == 3){
        cout<< 10 * (a - 1) + 6 <<endl;
    }else{
          cout<< 10 * a <<endl;
    }
       
    }
    return 0;
}

// Optimized approach.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        
        int a = x % 10;  // Extract the last digit
        int n = log10(x) + 1;  // Efficiently calculate the number of digits

        int result = 10 * (a - 1);  // Base result calculated once
        
        if (n % 4 == 1) {
            cout << result + 1 << endl;
        } else if (n % 4 == 2) {
            cout << result + 3 << endl;
        } else if (n % 4 == 3) {
            cout << result + 6 << endl;
        } else {
            cout << result + 10 << endl;
        }
    }
    return 0;
}

