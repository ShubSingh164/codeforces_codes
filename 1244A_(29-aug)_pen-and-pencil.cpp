#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    float a, b, c, d, k;
    cin>>a>>b>>c>>d>>k;
    
    int pen = ceil(a/c);
    int pencil = ceil(b/d);
    int sum = pen + pencil;
    if (sum <= k){
        cout<<pen<<" "<<pencil<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    
}

}
