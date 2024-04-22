#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (int i=0; i<H; i++) {
        cin >> C[i];
    }

    vector<vector<int>> dp(H, vector<int> (W));
    dp[0][0] = 1;
    for (int i=0; i<H-1; i++) {
        dp[i+1][0] = dp[i][0] + 1;
        if (C[i+1][0] == '#') {
            dp[i+1][0] = -100000000;
        }
    }
    for (int i=0; i<W-1; i++) {
        dp[0][i+1] = dp[0][i] + 1;
        if (C[0][i+1] == '#') {
            dp[0][i+1] = -100000000;
        }
    }
    for (int i=0; i<H-1; i++) {
        for (int j=0; j<W-1; j++) {
            dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]) + 1;
            if (C[i+1][j+1] == '#') {
                dp[i+1][j+1] = -100000000;
            }
        }
    }

    int ans = 0;
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            ans = max(ans, dp[i][j]);
        }
    }

    cout << ans << endl;

    return 0;
}