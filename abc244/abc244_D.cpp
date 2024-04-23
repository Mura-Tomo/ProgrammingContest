#include <bits/stdc++.h>
using namespace std;

int main (void) {
    vector<char> S(3);
    vector<char> T(3);
    for (int i=0; i<3; i++) {
        cin >> S[i];
    }
    for (int i=0; i<3; i++) {
        cin >> T[i];
    }

    if (S[0] == T[0] && S[1] == T[1] && S[2] == T[2]) {
        cout << "Yes" << endl;
    } else if (S[0] == T[0] || S[1] == T[1] || S[2] == T[2]) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}