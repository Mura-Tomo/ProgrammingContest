#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long N, X;
    cin >> N >> X;
    vector<long long> A(N);
    vector<long long> B(N);
    for (int i=0; i<N; i++) {
        cin >> A[i] >> B[i];
    }

    vector<long long> sum(N);
    sum[0] = A[0] + B[0];
    for (int i=1; i<N; i++) {
        sum[i] = sum[i-1] + A[i] + B[i];
    }

    long long ans;
    long long answer = numeric_limits<long long>::max();
    for (int i=0; i<N; i++) {
        if (i >= X) {
            break;
        }
        ans = sum[i] + B[i]*(X-i-1);
        answer = min(ans, answer);
    }

    cout << answer << endl;

    return 0;
}