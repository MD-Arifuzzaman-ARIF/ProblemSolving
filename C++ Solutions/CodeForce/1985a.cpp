#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    vector<string> results;
 
    for (int i = 0; i < t; ++i) {
        string a, b;
        cin >> a >> b;
 
        // Swap the first characters of a and b
        string a_new = b.substr(0, 1) + a.substr(1);
        string b_new = a.substr(0, 1) + b.substr(1);
 
        // Store the result
        results.push_back(a_new + " " + b_new);
    }
 
    // Output all results
    for (const string& result : results) {
        cout << result << endl;
    }
 
    return 0;
}