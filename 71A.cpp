//71A-Way_To_Long_Word

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        if (n<=10){
            cout<<s<<endl;
        }else{
           cout<<s.substr(0,1)<< n-2<<s.substr(n-1,1)<<endl; 
        }
    }

    return 0;
}
