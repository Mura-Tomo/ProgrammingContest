#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long N, Q;
    cin >> N >> Q;
    vector<long long> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    vector<long long> X(Q);
    for (int i=0; i<N; i++) {
        cin >> X[i];
    }

    sort(A.begin(), A.end());

    vector<long long> sum(N);
    sum[0] = A[0];
    for (int i=0; i<N-1; i++) {
        sum[i+1] = sum[i] + A[i+1];
    }

    
}