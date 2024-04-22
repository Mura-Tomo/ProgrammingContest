#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    vector<int> B(M);
    vector<int> C(M);
    vector<int> D(M);
    for (int i=0; i<M; i++) {
        cin >> A[i] >> B[i];
    }
    for (int i=0; i<M; i++) {
        cin >> C[i] >> D[i];
    }

    vector<int> P(N);
    for (int i=0; i<N; i++) {
        P[i] = i+1;
    }

    vector<vector<int>> e(N+1, vector<int> (N+1));
    for (int i=0; i<M; i++) {
            e[A[i]][B[i]] = 1;
            e[B[i]][A[i]] = 1;
    }

    for (int i=0; i<N+1; i++) {
        for (int j=0; j<N+1; j++) {
            cout << e[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> tmp(N+1, vector<int> (N+1));
    for (int i=0; i<N+1; i++) {
        for (int j=0; j<N+1; j++) {
            cout << tmp[i][j] << " ";
        }
        cout << endl;
    }

    do {
        int count = 0;
        for (int i=0; i<N+1; i++) {
            for (int j=0; j<N+1; j++) {
                if (e[i][j] == 1 && P[C[i]-1]P[D[i]-1] == 1) {
                    count++;
                }
            }
        }
        if (count == M) {
            cout << mp[1] << mp[2] << mp[3] << mp[4] << endl;
            for (int i=0; i<N+1; i++) {
                for (int j=0; j<N+1; j++) {
                    cout << tmp[i][j] << " ";
                }
             cout << endl;
            }
            cout << P[0] << P[1] << P[2] << P[3] << endl;
            cout << "Yes" << endl;
            return 0;
        }
        for (int i=0; i<N; i++) {
            mp[i] = 0;
        }
    } while (next_permutation(P.begin(), P.end()));

    cout << "No" << endl;

    return 0;
}