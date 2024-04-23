#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    ll N;
    cin >> N;
    vector<ll> S(N);
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }

    vector<ll> ans(N);
    ans[0] = S[0];
    for (int i=0; i<N-1; i++) {
        ans[i+1] = S[i+1] - S[i];
    }

    for (int i=0; i<N; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}