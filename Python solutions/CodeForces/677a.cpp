#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int width = 0;
    for (int i = 0, a; i < n; ++i) {
        cin >> a;
        if (a > h) width += 2;
        else width += 1;
    }
    cout << width;
    return 0;
}
