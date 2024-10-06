#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    int maxi = max(a,b);
    int mini = min(a,b);
    
    int res = maxi - mini;
    
    int ans = res/2;
    
    cout<<mini<<" "<<ans<<endl;
   
}
