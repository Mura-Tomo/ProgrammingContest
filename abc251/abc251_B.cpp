#include <iostream>
using namespace std;

int main (void) {
    int N,W;
    cin >> N >> W;
    int A[N];
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    int ans[W+1] = {0};
    for (int i=0; i<N; i++) {
        if (A[i] <= W) {
            ans[A[i]] = 1;
        }
    }
    if (N > 1) {
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (A[i]+A[j] <= W && i!=j ) {
                    ans[A[i]+A[j]] = 1;
                 }
            }
        }
    }
    if (N > 2) {
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                for (int k=0; k<N; k++) {
                    if (A[i]+A[j]+A[k] <= W && i!=j && j!=k && k!=i) {
                        ans[A[i]+A[j]+A[k]] = 1;
                    }
                }
            }
        }
    }

    int count = 0;
    for (int i=0; i<W+1; i++) {
        if (ans[i] == 1) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}