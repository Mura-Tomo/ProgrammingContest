#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;

    int count = 0;
    if (S[0] == '<') {
        count++;
    }
    if (S[S.length()-1] == '>') {
        count++;
    }
    for (int i=1; i<S.length()-1; i++) {
        if (S[i] == '=') {
            count++;
        }
    }

    if (count == S.length()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}