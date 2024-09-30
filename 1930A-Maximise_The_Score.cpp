#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        
        int off = 0;
        int res = 0;
        if (n % 2 == 0){
            off = (n / 2) * b;
            res =  n * a;
        }else{
            off = ((n-1)/2)* b + a;
            res = n * a;
        }

        int ans = min(off,res);
        cout<<ans<<endl;  
    } 
}
