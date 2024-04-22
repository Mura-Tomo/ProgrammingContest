#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S, T;
    cin >> S >> T;

    transform(S.begin(), S.end(), S.begin(), ::toupper);
    int t = 0;
    for (int i=0; i<S.length(); i++) {
        if (S[i] == T[t]) {
            t++;
        }
    }
    if (t == 3) {
        cout << "Yes" << endl;
        exit(0);
    }
    if (t == 2) {
        if (T[2] == 'X') {
            cout << "Yes" << endl;
            exit(0);
        }
    }

    cout << "No" << endl;
    return 0;
}