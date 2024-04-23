#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<vector<long long>> dp(N, vector<long long> (M+1));
    for (int i=0; i<N; i++) {
        for (int j=0; j<=M; j++) {
            dp[i][j] = -1000000000000000000;
        }
    }
    for (int i=0; i<N; i++) {
        dp[i][0] = 0;
    }
    dp[0][1] = A[0];

    for (int i=0; i<N-1; i++) {
        for (int j=0; j<M; j++) {
            dp[i+1][j+1] = max(dp[i][j]+A[i+1]*(j+1), dp[i][j+1]);
        }
    }

    cout << dp[N-1][M] << endl;

    return 0;
}