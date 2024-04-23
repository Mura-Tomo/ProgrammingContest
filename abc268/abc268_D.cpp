#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }
    vector<string> T(M);
    for (int i-0; i<M; i++) {
        cin >> T[i];
    }

    map<string, int> mp;
    for (int i=0; i<N; i++) {
        map[S[i]] = i;
    }
    return 0;
}