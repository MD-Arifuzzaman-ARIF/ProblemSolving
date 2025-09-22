#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        string s = to_string(x);                     
        char min_digit = *min_element(s.begin(), s.end()); 
        cout << (min_digit - '0') << "\n";       
    }

    return 0;
}
