#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    bool found = false;
    for (char c : str) {
        if (c == 'H' || c == 'Q' || c == '9') {
            found = true;
            break; // no need to check further
        }
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
