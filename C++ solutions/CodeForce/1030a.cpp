#include <iostream>
using namespace std;

int main() {
    int n, opinion;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> opinion;
        if(opinion == 1) {
            cout << "Hard" << endl;
            return 0; 
        }
    }
    
    cout << "Easy" << endl;  
    return 0;
}