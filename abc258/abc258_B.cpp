#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<string> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    
    vector<string> X(N*3);
    for (int i=0; i<N; i++) {
        X[i] = A[i] + A[i] + A[i];
        X[i+N] = A[i] + A[i] + A[i];
        X[i+N*2] = A[i] + A[i] + A[i];
    }

    long long a1 = 0;
    long long a2 = 0;
    long long a3 = 0;
    long long a4 = 0;
    long long a5 = 0;
    long long a6 = 0;
    long long a7 = 0;
    long long a8 = 0;
    long long tmp;
    for (int i=0; i<N*2; i++) {
        for (int j=0; j<N*3; j++) {
            tmp = 0;
            for (int k=0; k<N; k++) {
                tmp += (int)(X[i+k][j] - '0')*pow(10, N-k-1);
            }
            if (tmp > a1) {
                a1 = tmp;
            }
        }
    }
    for (int i=N*3-1; i>=N-1; i--) {
        for (int j=0; j<N*3; j++) {
            tmp = 0;
            for (int k=0; k<N; k++) {
                tmp += (int)(X[i-k][j] - '0')*pow(10, N-k-1);
            }
            if (tmp > a2) {
                a2 = tmp;
            }
        }
    }
    for (int i=0; i<N*3; i++) {
        for (int j=0; j<N*2; j++) {
            tmp = 0;
            for (int k=0; k<N; k++) {
                tmp += (int)(X[i][j+k] - '0')*pow(10, N-k-1);
            }
            if (tmp > a3) {
                a3 = tmp;
            }
        }
    }
    for (int i=0; i<N*3; i++) {
        for (int j=N*3-1; j>=N-1; j--) {
            tmp = 0;
            for (int k=0; k<N; k++) {
                tmp += (int)(X[i][j-k] - '0')*pow(10, N-k-1);
            }
            if (tmp > a4) {
                a4 = tmp;
            }
        }
    }
    for (int i=0; i<N*2; i++) {
        for (int j=0; j<N*2; j++) {
            tmp = 0;
            for (int k=0; k<N; k++) {
                tmp += (int)(X[i+k][j+k] - '0')*pow(10, N-k-1);
            }
            if (tmp > a5) {
                a5 = tmp;
            }
        }
    }
    for (int i=N*3-1; i>=N-1; i--) {
        for (int j=N*3-1; j>=N-1; j--) {
            tmp = 0;
            for (int k=0; k<N; k++) {
                tmp += (int)(X[i-k][j-k] - '0')*pow(10, N-k-1);
            }
            if (tmp > a6) {
                a6 = tmp;
            }
        }
    }
    for (int i=N*3-1; i>=N-1; i--) {
        for (int j=0; j<N*2; j++) {
            tmp = 0;
            for (int k=0; k<N; k++) {
                tmp += (int)(X[i-k][j+k] - '0')*pow(10, N-k-1);
            }
            if (tmp > a7) {
                a7 = tmp;
            }
        }
    }
    for (int i=0; i<N*2; i++) {
        for (int j=N*3-1; j>=N-1; j--) {
            tmp = 0;
            for (int k=0; k<N; k++) {
                tmp += (int)(X[i+k][j-k] - '0')*pow(10, N-k-1);
            }
            if (tmp > a8) {
                a8 = tmp;
            }
        }
    }

    long long answer = max(max(max(max(max(max(max(a1, a2),a3),a4),a5),a6),a7),a8);
    cout << answer << endl;
    
    return 0;
}