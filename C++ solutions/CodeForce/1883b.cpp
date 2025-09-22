#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        int odd_count = 0;
        for (int f : freq) {
            if (f % 2 != 0) odd_count++;
        }

        if (odd_count - k <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
