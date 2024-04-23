#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;

    vector<vector<long long>> dp(N, vector<long long>(9));
    for (int i=0; i<9; i++) {
        dp[0][i] = 1;
    }
    for (int i=1; i<N; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0] + dp[i-1][1] + dp[i-1][2];
        dp[i][2] = dp[i-1][1] + dp[i-1][2] + dp[i-1][3];
        dp[i][3] = dp[i-1][2] + dp[i-1][3] + dp[i-1][4];
        dp[i][4] = dp[i-1][3] + dp[i-1][4] + dp[i-1][5];
        dp[i][5] = dp[i-1][4] + dp[i-1][5] + dp[i-1][6];
        dp[i][6] = dp[i-1][5] + dp[i-1][6] + dp[i-1][7];
        dp[i][7] = dp[i-1][6] + dp[i-1][7] + dp[i-1][8];
        dp[i][8] = dp[i-1][7] + dp[i-1][8];
        if (dp[i][0] > 998244353) {
            dp[i][0] = dp[i][0] % 998244353;
        }
        if (dp[i][1] > 998244353) {
            dp[i][1] = dp[i][1] % 998244353;
        }
        if (dp[i][2] > 998244353) {
            dp[i][2] = dp[i][2] % 998244353;
        }
        if (dp[i][3] > 998244353) {
            dp[i][3] = dp[i][3] % 998244353;
        }
        if (dp[i][4] > 998244353) {
            dp[i][4] = dp[i][4] % 998244353;
        }
        if (dp[i][5] > 998244353) {
            dp[i][5] = dp[i][5] % 998244353;
        }
        if (dp[i][6] > 998244353) {
            dp[i][6] = dp[i][6] % 998244353;
        }
        if (dp[i][7] > 998244353) {
            dp[i][7] = dp[i][7] % 998244353;
        }
        if (dp[i][8] > 998244353) {
            dp[i][8] = dp[i][8] % 998244353;
        }
    }

    long long answer = 0;
    for (int i=0; i<9; i++) {
        answer += dp[N-1][i];
        if (answer > 998244353) {
            answer = answer % 998244353;
        }
    }

    cout << answer << endl;

    return 0;
}