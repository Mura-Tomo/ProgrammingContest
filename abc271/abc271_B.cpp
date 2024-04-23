#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, Q;
    cin >> N >> Q;
    vector<int> L(N);
    vector<vector<int>> a(N);
    for (int i=0; i<N; i++) {
        cin >> L[i];
        for (int j=0; j<L[i]; j++) {
            int p;
            cin >> p;
            a[i].push_back(p);
        }
    }
    vector<int> s(Q);
    vector<int> t(Q);
    for (int i=0; i<Q; i++) {
        cin >> s[i] >> t[i];
    }

    for (int i=0; i<Q; i++) {
        cout << a[s[i]-1][t[i]-1] << endl;
    }

    return 0;
}