#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }

    map<string, int> mp;
    for (int i=0; i<N; i++) {
        mp[S[i]]++;
        if (mp[S[i]] == 1) {
            cout << S[i] << endl;
        } else {
            cout << S[i] << "(" << mp[S[i]]-1 << ")" << endl;
        }
    }

    return 0;
}