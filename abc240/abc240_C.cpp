#include <iostream>
using namespace std;

int main (void) {
    int N,X;
    cin >> N >> X;
    int a[N];
    int b[N];
    for (int i=0; i<N; i++) {
        cin >> a[i] >> b[i];
    }

    int dp[N+1][X+1];
    for (int i=0; i<N; i++) {
        for (int j=0; j<X; j++) {
            dp[i][j] = 0;
        }
    }

    dp[0][0] = 1;
    for (int i=0; i<N; i++) {
        for (int j=0; j<=X; j++) {
            if (dp[i][j] == 1 && j+a[i] <= X) {
                dp[i+1][j+a[i]] = 1;
            }
            if (dp[i][j] == 1 && j+b[i] <= X) {
                dp[i+1][j+b[i]] = 1;
            }
        }
    }

    if (dp[N][X] == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}