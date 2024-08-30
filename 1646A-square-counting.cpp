#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n, s;
        cin >> n >> s;

if (s == 0){
    cout<<"0"<<endl;
}else{
                cout <<   s / (n*n) << endl;
}


    }
    return 0;
}
