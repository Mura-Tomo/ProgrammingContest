#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S, T;
    cin >> S >> T;

    int count = 0;
    if (S.length() > T.length()) {
        cout << "No" << endl;
    } else {
        for (int i=0; i<S.length(); i++) {
            if (S[i] == T[i]) {
                count++;
            }
        }
        if (count == S.length()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}