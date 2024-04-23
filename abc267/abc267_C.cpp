#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;
    vector<long long> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<long long> sum(N);
    sum[0] = 0;
    for (int i=1; i<N; i++) {
        sum[i] = sum[i-1] + A[i-1];
    }

    long long ans = 0;
    long long answer = -1000000000000000000;
    for (int i=1; i<=M; i++) {
        ans += i*A[i-1];
    }
    answer = max(ans, answer);
    for (int i=0; i<N-M; i++) {
        ans = ans - (sum[i+M]-sum[i]) +M*A[i+M];
        answer = max(ans, answer);
    }

    cout << answer << endl;

    return 0;
}