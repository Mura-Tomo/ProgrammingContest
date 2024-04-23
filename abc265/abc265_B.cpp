#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long N,M,T;
    cin >> N >> M >> T;
    vector<int> A(N-1);
    for (int i=0; i<N-1; i++) {
        cin >> A[i];
    }
    vector<int> X(M);
    vector<int> Y(M);
    for (int i=0; i<M; i++) {
        cin >> X[i] >> Y[i];
    }

    for (int i=0; i<M; i++) {
        A[X[i]-1] -= Y[i]; 
    }

    for (int i=0; i<N-1; i++) {
        T = T - A[i];
        if (T <= 0) {
            cout << "No" << endl;
            exit(0);
        }
    }
    cout << "Yes" << endl;

    return 0;
}