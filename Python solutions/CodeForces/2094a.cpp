#include <iostream>
#include <string>
using namespace std;

int main() {
    int start;
    cin >> start;
    cin.ignore();
    string str;
    
    for (int j=0; j<start; j++) {

           getline(cin, str);
         
        for (size_t i = 0; i < str.length(); i++) {
            
            if (i == 0 && str[i] != ' ') {
                cout << str[i];
            }
    
            else if (str[i] == ' ' && i + 1 < str.length() && str[i + 1] != ' ') {
                cout << str[i + 1];
            }
        }
        cout << endl;
    }
    return 0;
}
