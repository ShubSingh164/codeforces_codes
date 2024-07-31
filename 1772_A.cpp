#include<bits/stdc++.h>
using namespace std ;
#define int long long

void sol(int a , int b) {
   int res = a+b;
   cout<<res<<endl;

}



int32_t main(){
    #ifndef ONLINE_JUDGE 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout); 
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin>>t;
    while (t--)
    {
        int a, b;
        cin>>a>>b;
     sol(a,b);
    }
    
    return 0;
}
