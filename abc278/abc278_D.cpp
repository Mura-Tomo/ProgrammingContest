#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    ll Q;
    cin >> Q;

    ll sore = -1;
    vector<ll> count(N);
    for (int i=0; i<Q; i++) {
        ll t;
        cin >> t;
        if (t == 1) {
            count.assign(N, 0);
            ll x;
            cin >> x;
            sore = x;
        } else if (t == 2) {
            ll i;
            cin >> i;
            ll x;
            cin >> x;
            if (sore >= 0 && count[i-1] <= 1) {
                A[i-1] = sore;
            }
            count[i-1]++;
            A[i-1] += x;
        } else if (t == 3) {
            ll i;
            cin >> i;
            if (sore >= 0 && count[i-1] <= 1) {
                A[i-1] = sore;
            }
            count[i-1]++;
            cout << A[i-1] << endl;
        }
    }

    return 0;
}