#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;

    if (S[3] == '3' && S[4] == '1' && S[5] == '6') {
        cout << "No" << endl;
        exit(0);
    }
    if (S[3] == '0' && S[4] == '0' && S[5] == '0') {
        cout << "No" << endl;
        exit(0);
    }

    if (S[3] == '0' || S[3] == '1' || S[3] == '2') {
        cout << "Yes" << endl;
        exit(0);
    }
    if (S[3] == '3') {
        if (S[4] == '0' || S[4] == '1' || S[4] == '2' || S[4] == '3' || S[4] == '4') {
            cout << "Yes" << endl;
            exit(0);
        }
    }

    cout << "No" << endl;
    return 0;
}