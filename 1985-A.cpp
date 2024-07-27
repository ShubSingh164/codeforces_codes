//1985-A
#include<bits/stdc++.h>
using namespace std ;
#define int long long

void sol(string &str1, string &str2) {
    iter_swap(str1.begin(),str2.begin());

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
        string str1, str2;
        cin>>str1>>str2;
     sol(str1, str2);
     cout<<str1<<" "<<str2<<endl;
    }
    return 0;
}
