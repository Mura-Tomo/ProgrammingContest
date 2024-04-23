#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        if (mp[S[i]] >= 2) {
            cout << "No" << endl;
            exit(0);
        }
    }

    for (int i=0; i<N; i++) {
        if (S[i][0] != 'H' && S[i][0] != 'D' && S[i][0] != 'C' && S[i][0] != 'S') {
            cout << "No" << endl;
            exit(0);
        }
        if (S[i][1] != 'A' && S[i][1] != '2' && S[i][1] != '3' && S[i][1] != '4' && S[i][1] != '5' && S[i][1] != '6' && S[i][1] != '7' && S[i][1] != '8' && S[i][1] != '9' && S[i][1] != 'T' && S[i][1] != 'J' && S[i][1] != 'Q' && S[i][1] != 'K') {
            cout << "No" << endl;
            exit(0);
        }
    }

    cout << "Yes" << endl;

    return 0;
}