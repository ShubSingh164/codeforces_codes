#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    
    int a = n % 4;
    
    if (a == 0){
        cout<< n/4<<endl;
    }else{
        cout<< (n/4) + 1<<endl;
    }
}

}
