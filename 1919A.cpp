//1919A-Wallet_Exchange.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    
    int c = abs(a-b);
    if (c % 2 == 0){
        cout<<"Bob\n";
    }else{
        cout<<"Alice\n";
    }
    }
    return 0;
}
