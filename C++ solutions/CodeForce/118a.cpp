#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";
    for (char c : s) {
        c = tolower(c);
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
            result += '.';
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}
