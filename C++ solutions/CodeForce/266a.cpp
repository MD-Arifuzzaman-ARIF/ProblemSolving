#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string stones;
    
    cin >> n >> stones;
    
    int count = 0;
    
    for (int i = 1; i < n; i++) {
        if (stones[i] == stones[i - 1]) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
