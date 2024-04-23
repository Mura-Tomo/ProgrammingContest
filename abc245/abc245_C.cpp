#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, K;
    cin >> N >> K;
    vector<long long> A(N);
    vector<long long> B(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    for (int i=0; i<N; i++) {
        cin >> B[i];
    }

    vector<vector<long long>> cost(2, vector<long long> (N));
    cost[0][0] = A[0];
    cost[1][0] = B[0];
    for (int i=0; i<N-1; i++) {
        cost[0][i+1] = min(abs(A[i+1]-A[i]), abs(A[i+1]-B[i]));
        cost[1][i+1] = min(abs(B[i+1]-A[i]), abs(B[i+1]-B[i]));
        if (cost[0][i+1] > K) {
            A[i+1] = -10000000000;
        }
        if (cost[1][i+1] > K) {
            B[i+1] = -10000000000;
        }
    }

    for (int i=0; i<N; i++) {
        if (A[i] < 0 && B[i] < 0) {
            cout << "No" << endl;
            exit(0);
        } 
    }

    cout << "Yes" << endl;

    return 0;
}