#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<ll> sum(N);
    sum[0] = A[0];
    for (int i=0; i<N-1; i++) {
        sum[i+1] = sum[i] + A[i+1];
    }

    map<ll, ll> mp;
    ll ans = 0;
    for (int i=0; i<N; i++) {
        if (sum[i] == K) {
            ans++;
        }
    }
    for (int i=1; i<N; i++) {
        mp[sum[i-1]]++;
        ans += mp[sum[i] - K];
    }

    cout << ans << endl;

    return 0;
}