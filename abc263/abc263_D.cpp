#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long N, L, R;
    cin >> N >> L >> R;
    vector<long long> A(N);
    for (long long i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<long long> sum(N);
    sum[0] = A[0];
    for (long long i=0; i<N-1; i++) {
        sum[i+1] = sum[i] + A[i+1];
    }

    vector<pair<long long, long long>> le(N);
    for (long long i=0; i<N; i++) {
        le[i].first = L*(i+1) - sum[i];
        le[i].second = i+1;
    }
    sort(le.begin(), le.end());
    long long x = le[0].second;
    if (le[0].first >= 0) {
        x = 0;
    }
 
    for (long long i=0; i<x; i++) {
        A[i] = L;
    }

    vector<long long> sum1(N);
    sum1[0] = A[0];
    for (long long i=0; i<N-1; i++) {
        sum1[i+1] = sum1[i] + A[i+1];
    }

    vector<pair<long long, long long>> ri(N);
    for (long long i=0; i<N; i++) {
        ri[N-i-1].first = R*(i+1) - (sum1[N-1] - sum1[N-i-2]);
        ri[N-i-1].second = i+1;
    }
    sort(ri.begin(), ri.end());
    int y = ri[0].second;
    if (ri[0].first >= 0) {
        y = 0;
    }

    for (long long i=N-y; i<N; i++) {
        A[i] = R;
    }

    long long ans = 0;
    for (long long i=0; i<N; i++) {
        ans += A[i];
    }

    cout << ans << endl;

    return 0;
}