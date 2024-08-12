//1283A-Minute_Before_New_Year.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int h, m;
        cin>>h>>m;
        int ans = 0;
        if (h == 23){
          ans = 60 - m;
        }else{
            ans = (23 - h)*60 + (60-m);
        }
        cout<<ans<<endl;
    }

    return 0;
}
