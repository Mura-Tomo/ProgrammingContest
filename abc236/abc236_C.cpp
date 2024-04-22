#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    vector<string> T(M);
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }
    for (int i=0; i<M; i++) {
        cin >> T[i];
    }

    int now = 0;
    for (int i=0; i<N; i++) {
        if (S[i] == T[now]) {
            cout << "Yes" << endl;
            now++;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}