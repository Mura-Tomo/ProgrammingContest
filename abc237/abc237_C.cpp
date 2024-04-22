#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;

    int si = S.size();

    int first = 0;
    for (int i=0; i<si; i++) {
        if (S[i] != 'a') {
            first = i;
            break;
        }
    }
    S = S.erase(0, first);
    string T = S;
    int ti = T.size();
    int last = -1;
    for (int i=ti-1; i>=0; i--) {
        if (T[i] != 'a') {
            last = i;
            break;
        }
    }
    T = T.erase(last+1);
    string U = T;
    int ui = U.size();
    for (int i=0; i<ui; i++) {
        if (U[i] != U[ui-i-1]) {
            cout << "No" << endl;
            exit(0);
        }
    }
    if (first > ti - last - 1) {
        cout << "No" << endl;
        exit(0);
    }

    cout << "Yes" << endl;

    return 0;
}