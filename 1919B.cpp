// 1919B-Plus_Minus_split.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	vector<char> arr(n);
	stack<char> st;
	vector<char>plus;
	vector<char>minus;
	for (int i=0; i<n;i++){
	    cin>>arr[i];
	}
    for (char c: arr){
        if (c == '+'){
            st.push(c);
            plus.push_back(c);
        }else if(c == '-'){
            if (!st.empty()){
                st.pop();
            }
            minus.push_back(c);
        }
    }
    int p = plus.size();
    int m = minus.size();
    cout<<abs(p - m)<<endl;
  }
	
return 0;

}



Another approach for this code without using stack just simply upadte plus and minus.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int plus = 0;
        int minus = 0;
        char c;

        for (int i = 0; i < n; i++) {
            cin >> c;
            if (c == '+') {
                plus++;
            } else if (c == '-') {
                minus++;
            }
        }

        cout << abs(plus - minus) << endl;
    }
    return 0;
}

