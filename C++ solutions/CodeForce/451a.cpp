#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    if (!(cin >> n)) return 0;
    
    // If n is divisible by 4, the second player wins; otherwise the first wins.
    if (n % 4 == 0) cout << "Second\n";
    else cout << "First\n";
    
    return 0;
}
