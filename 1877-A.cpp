//1877_A
#include<bits/stdc++.h>
using namespace std ;
#define int long long

void sol(int n) {
    	vector<int> nums(n-1);
	for (int i =0; i<n-1;i++){
	    cin>>nums[i];
	}
	int sum = accumulate(nums.begin(),nums.end(),0);
	
	if (sum<0){
	    cout<<abs(sum)<<endl;
	}
else{
    cout<<-sum<<endl;
 }
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
        int n;
        cin>>n;
     sol(n);
    }   
}
