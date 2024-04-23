#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<pair<int, int>> X(N);
    vector<pair<int, int>> Y(N);
    vector<pair<int, int>> P(N);
    for (int i=0; i<N; i++) {
        cin >> X[i].first >> Y[i].first;
        X[i].second = i;
        Y[i].second = i;
        P[i].first = Y[i].first;
        P[i].second = X[i].first;
    }
    string S;
    cin >> S;

    map<long long, char> mp;
    for (int i=0; i<N; i++) {
        mp[X[i].first*(10000000000) + Y[i].first] = S[i];
    }

    sort(P.begin(), P.end());

    for (int i=0; i<N-1; i++) {
        if (P[i].first == P[i+1].first) {
            if (mp[P[i].second*(10000000000) + P[i].first] == 'R' && mp[P[i+1].second*(10000000000) + P[i+1].first] == 'L') {
                cout << "Yes" << endl;
                exit(0);
            }
        }
    }

    cout << "No" << endl;

    return 0;
}