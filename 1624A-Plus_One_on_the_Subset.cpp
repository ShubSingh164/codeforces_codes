// 1624A-Plus_One_on_the_Subset.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort (arr.begin(),arr.end());
        cout<<arr[n-1]-arr[0]<<endl;
    }

    return 0;
}
