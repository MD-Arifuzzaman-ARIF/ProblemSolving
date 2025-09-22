#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, m, a;
    if (!(cin >> n >> m >> a)) return 0;
    
    long long x = (n + a - 1) / a; 
    long long y = (m + a - 1) / a;
    cout << (x * y) << '\n';
    return 0;
}
