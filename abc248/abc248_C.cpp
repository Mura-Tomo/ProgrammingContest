#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, M, K;
    cin >> N >> M >> K;

    vector<long long> nck(N+1);
    nck[0] = 1;
    for (int i=1; i<=N; i++) {
        nck[i] = (nck[i-1] * (N-i+1) / i) % 998244353;
    }

    vector<vector<vector<long long>>> dp(N+1, vector<vector<long long>>(M+1, vector<long long> (K+1)));
    long long tmp = 0;

    for (int i=0; i<=N; i++) {
        for (int j=0; j<=M; j++) {
            for (int k=0; k<=K; k++) {
                if (j == 1 && k >= i) {
                    dp[i][j][k] = 1;
                } else if (k == i && j >= 1) {
                    dp[i][j][k] = 1;
                } else if (k > i && j >= 2 && k > i*j) {
                    dp[i][j][k] = dp[i][j][k-1] % 998244353;
                } else if (k > i && j > k-i+1) {
                    dp[i][j][k] = dp[i][j-1][k] % 998244353;
                } else if (k > i && j >= 2 && k < i*j) {
                    dp[i][j][k] = max(dp[i][j][k-1] + nck[tmp], dp[i][j-1][k] + nck[tmp]) % 998244353;
                } else if (k > i && j >= 2 && k == i*j) {
                    dp[i][j][k] = (dp[i][j][k-1] + 1) % 998244353;
                }
            }
        }
    }

    cout << dp[N][M][K] << endl;

    // for (int j=0; j<=M; j++) {
       // for (int k=0; k<=K; k++) {
         //   cout << dp[N][j][k] << " ";
        //}
        //cout << endl;
    //}

    return 0;
}