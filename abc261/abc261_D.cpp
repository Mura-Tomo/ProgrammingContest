#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long N, M;
    cin >> N >> M;
    vector<long long> X(N);
    for (int i=0; i<N; i++) {
        cin >> X[i];
    }
    vector<long long> C(M);
    vector<long long> Y(M);
    for (int i=0; i<M; i++) {
        cin >> C[i] >> Y[i];
    }

    vector<long long> bonus(N);
    for (int i=0; i<N; i++) {
        bonus[i] = 0;
    }
    for (int i=0; i<M; i++) {
        bonus[C[i] - 1] = Y[i];
    }

    vector<vector<long long>> dp(N+1, vector<long long> (N+1));
    for (int i=0; i<N+1; i++) {
        for (int j=0; j<N+1; j++) {
            dp[i][j] = 0;
        }
    }
    long long ans = 0;
    for (int i=1; i<N+1; i++) {
        dp[0][i] = ans;
        ans = 0;
        ans = max(ans, dp[0][i]);
        for (int j=1; j<i+1; j++) {
            dp[j][i] = dp[j-1][i-1] + X[i-1] + bonus[j-1];
            ans = max(ans, dp[j][i]);
        }
    }

    cout << ans << endl;

    return 0;
}