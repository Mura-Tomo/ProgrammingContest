#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    string S, T;
    cin >> S >> T;

    for (int i=0; i<S.length(); i++) {
        for (int j=1; j<=S.length(); j++) {
            string U = S.substr(i, j);
            if (U == T) {
                cout << "Yes" << endl;
                exit(0);
            }
        }
    }

    cout << "No" << endl;

    return 0;
}