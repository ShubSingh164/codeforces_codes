//Dice-Rolling
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int x;
	    cin>>x;
	    while(x>=2 || x<=100){
	    cout<<ceil(x/7.0)<<"\n";
	    break;
	    }
	}

}
