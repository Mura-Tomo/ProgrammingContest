#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    vector<ll> X(2*N);
    for (int i=0; i<N; i++) {
        X[i] = A[i];
        X[i+N] = A[i];
    }

    vector<ll> d(2*N);
    for (int i=0; i<N-1; i++) {
        d[i] = X[i+1] - X[i];
        d[i+N] = d[i];
    }
    d[N-1] = A[0] + M - A[N-1];
    d[2*N-1] = d[N-1];

    ll sum = 0;
    ll ans = 0;
    for (int i=0; i<2*N; i++) {
        if (d[i] <= 1) {
            sum += X[i];
        } else {
            sum += X[i];
            ans = max(ans, sum);
            sum = 0;
        }
    }

    ll fi = 0;
    for (int i=0; i<N; i++) {
        fi += A[i];
    }

    cout << fi - ans << endl;

    return 0;
}