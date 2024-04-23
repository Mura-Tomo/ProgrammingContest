#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> T(N);
    vector<int> X(N);
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> T[i] >> X[i] >> A[i];
    }

    vector<vector<int>> Y(5, vector<int> (100000));
    int t = 0;
    for (int i=0; i<100000; i++) {
        for (int j=0; j<5; j++) {
            if (i+1 == T[t] && j == X[t]) {
                Y[j][i] = A[t];
                t++;
            } else {
                Y[j][i] = 0;
            }
        }
    }

    vector<vector<long long>> dp(5, vector<long long>(100001));
    for (int i=0; i<5; i++) {
        for (int j=0; j<10001; j++) {
            dp[i][j] = -1000000000000000000;   
        }
    }
    dp[0][0] = 0;
    
    for (int i=1; i<100001; i++) {
        dp[0][i] = max(dp[0][i-1], dp[1][i-1]) + Y[0][i-1];
        for (int j=1; j<=3; j++) {
            dp[j][i] = max(dp[j-1][i-1], max(dp[j][i-1], dp[j+1][i-1])) + Y[j][i-1];
        }
        dp[4][i] = max(dp[3][i-1], dp[4][i-1]) + Y[4][i-1];
    }

    long long a,b,c,ans;
    a = max(dp[0][100000], dp[1][100000]);
    b = max(dp[2][100000], dp[3][100000]);
    c = max(a, b);
    ans = max(c, dp[4][100000]);

    cout << ans << endl;

    return 0;
}