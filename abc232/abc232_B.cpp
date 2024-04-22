#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;
    string T;
    cin >> T;

    vector<char> a(S.size());
    for (int i=0; i<S.size(); i++) {
        a[i] = S[i];
    }
    vector<char> b(T.size());
    for (int i=0; i<T.size(); i++) {
        b[i] = T[i];
    }

    vector<int> ans(S.size());
    for (int i=0; i<S.size(); i++) {
        ans[i] = (int) a[i] - (int) b[i];
        if (ans[i] < 0) {
            ans[i] += 26;
        }
    }

    for (int i=0; i<S.size()-1; i++) {
        if (ans[i+1] != ans[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}