#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string team1, team2;
    int score1 = 0, score2 = 0;

    for (int i = 0; i < n; i++) {
        string team;
        cin >> team;
        if (team1.empty() || team == team1) {
            team1 = team;
            score1++;
        } else {
            team2 = team;
            score2++;
        }
    }

    if (score1 > score2) {
        cout << team1 << endl;
    } else {
        cout << team2 << endl;
    }

    return 0;
}
