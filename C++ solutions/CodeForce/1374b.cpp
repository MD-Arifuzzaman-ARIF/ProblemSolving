#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        int cnt2 = 0, cnt3 = 0;

        // Count powers of 2
        while (n % 2 == 0) {
            cnt2++;
            n /= 2;
        }

        // Count powers of 3
        while (n % 3 == 0) {
            cnt3++;
            n /= 3;
        }

        // If leftover > 1 -> has other prime factors
        if (n != 1 || cnt2 > cnt3) {
            cout << -1 << "\n";
        } else {
            cout << (2 * cnt3 - cnt2) << "\n";
        }
    }
    return 0;
}
