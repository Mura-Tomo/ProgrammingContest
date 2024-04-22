#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> A(N), C(N);
    for (int i=0; i<N; i++) {
        cin >> A[i] >> C[i];
    }

    map<int, int> mp;
    for (int i=0; i<N; i++) {
        mp[C[i]] = 1000000000;
    }
    for (int i=0; i<N; i++) {
        if (mp[C[i]] > A[i]) {
            mp[C[i]] = A[i];
        }
    }

    int ans = 0;
    for (int i=0; i<N; i++) {
        if (mp[C[i]] > ans) {
            ans = mp[C[i]];
        }
    }

    cout << ans << endl;

    return 0;
}