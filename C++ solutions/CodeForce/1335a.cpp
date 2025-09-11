#include<iostream>
using namespace std;
 
int main() {
    int t;  
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int answer = (n - 1) / 2;
        
        cout << answer << endl;
    }
    
    return 0;
}