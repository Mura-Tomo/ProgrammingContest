#include <iostream>
using namespace std;

int main (void) {
    int N,M;
    cin >> N >> M;
    int U[M];
    int V[M];
    for (int i=0; i<M; i++) {
        cin >> U[i] >> V[i];
    }

    int X[N][N];
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            X[i][j] = 0;
        }
    }
    for (int i=0; i<M; i++) {
       X[U[i]-1][V[i]-1] = 1;
    }
    int count = 0;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            for (int k=j+1; k<N; k++) {
                if (X[i][j] == 1 && X[i][k] == 1 && X[j][k] == 1) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}