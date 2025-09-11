#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    while(t--) {
        string line;
        getline(cin, line);
        
        for(int i = 0; i < line.length(); i++) {
            if((i == 0 || line[i-1] == ' ') && line[i] != ' ') {
                cout << line[i];
            }
        }
        cout << '\n';
    }
    return 0;
}