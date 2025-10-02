#include <bits/stdc++.h>
using namespace std;

int main() {
    char shift;
    string typed;
    cin >> shift >> typed;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string result = "";

    for (char c : typed) {
        int pos = keyboard.find(c);
        if (shift == 'R') {
            result += keyboard[pos - 1]; 
        } else { 
            result += keyboard[pos + 1]; 
        }
    }

    cout << result << endl;
    return 0;
}
