//1979A-Guess_the_maximum.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    for (int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    vector<int> b;
	    for (int i=0 ; i<n-1; i++){
	        b.push_back(max(a[i],a[i+1]));
	    }
	    sort (b.begin(),b.end());
	    cout<<b[0]-1<<endl;
	}
	return 0;

}
