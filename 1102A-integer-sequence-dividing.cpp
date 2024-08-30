#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Calculate the sum using the formula
    int sum = (n * (n + 1)) / 2;
    
    // Check if the sum is even or odd
    cout << (sum % 2 == 0 ? "0" : "1") << endl;

    return 0;
}


my appraoch :

#include <iostream>
using namespace std;

int sum(int n) {
    if (n <= 0) {
        return 0; 
    }
    return n + sum(n - 1); 
}

int main() {
    int n;
    cin >> n;

    int result = sum(n);
    
    if (result % 2 == 0){
        cout<<"0"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
 

    return 0;
}
