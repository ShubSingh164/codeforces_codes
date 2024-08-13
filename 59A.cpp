//59A-Word.
#include <bits/stdc++.h>
using namespace std;

int main() {
string s;
cin>>s;

int counts = 0;
int countc = 0;

for (int i =0; i<s.length(); i++){
    if (s[i] >= 'a' && s[i] <= 'z'){
        counts++;
    }else if(s[i]>='A' && s[i]<='Z') {
        countc++;
    }
}

if (countc<counts){
    transform(s.begin(),s.end(),s.begin(), ::tolower);
}else if(countc == counts){
    transform(s.begin(),s.end(),s.begin(), ::tolower);
}else{
   transform(s.begin(),s.end(),s.begin(), ::toupper); 
}
cout<<s<<endl;
}
