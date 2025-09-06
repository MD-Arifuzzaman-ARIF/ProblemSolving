#include <iostream>
using namespace std;

int main() {
    int b, a;
    cin >> b;

    bool hard = false; // flag to track if any '1' is found

    for (int i = 0; i < b; i++) {
        cin >> a;
        if (a == 1) {
            hard = true;
        }
    }

    if (hard) {
        cout << "Hard" << endl;
    } else {
        cout << "Easy" << endl;
    }

    return 0;
}
