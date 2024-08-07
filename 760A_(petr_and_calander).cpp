
#include<bits/stdc++.h>
using namespace std;

int main(){
int m,d,n;

    while (cin >> m >> d)
    {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            if (d == 6 || d == 7)
                n = 6;
            else
                n = 5;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            if (d == 7)
                n = 6;
            else
                n = 5;
        }
        else
        {
            if (d == 1)
                n = 4;
            else
                n = 5;
        }

        cout << n << endl;
    }

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
	
// 	int a,b;
// 	cin>>a>>b;
	
// 	if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12){
// 	    if (b<5){
// 	        cout<<"yes";
// 	    }
// 	}else{
// 	    cout<<"no";
// 	}
// 	return 0;

// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;

//     if ((a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) && ( b == 6 ||  b == 7 )) {
//             cout << "6" << endl;
//     } 
//     else if(a==2){
//         cout<<"5"<<endl;
        
//     }else if (( a == 4 || a == 6 || a == 9 || a == 11) && (b == 7)) {
//             cout << "6" << endl;
//         }else{
//             cout<<"5"<<endl;
//         }
        
    

//     return 0;
// }
