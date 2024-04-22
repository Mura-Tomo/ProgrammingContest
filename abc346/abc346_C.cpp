#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long N, K;
    cin >> N >> K;
    vector<long long> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    map<long long, long long> mp;
    long long sum = K * (K+1) / 2;
    for (int i=0; i<N; i++) {
        if (A[i] <= K) {
            mp[A[i]] = 0;
        } else {
            mp[A[i]] = 1;
        }
    }
    for (int i=0; i<N; i++) {
        if (mp[A[i]] == 0) {
            sum = sum - A[i];
        }
        mp[A[i]] = 1;
    }

    cout << sum << endl;

    return 0;
}