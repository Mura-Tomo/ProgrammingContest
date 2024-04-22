#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> A(4*N-1);
    for (int i=0; i<4*N-1; i++) {
        cin >> A[i];
    }

    vector<int> B(N);
    for (int i=0; i<N; i++) {
        B[i] = 0;
    }
    for (int i=0; i<4*N-1; i++) {
        B[A[i]-1]++;
    }

    int ans;
    for (int i=0; i<N; i++) {
        if (B[i] == 3) {
            ans = i+1;
        }
    }

    cout << ans << endl;

    return 0;
}