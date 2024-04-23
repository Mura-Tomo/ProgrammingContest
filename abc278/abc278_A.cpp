#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<int> ans(N);
    int x = K;
    for (int i=0; i<N; i++) {
        if (x <= N) {
            ans[i] = A[x];
        } else {
            ans[i] = 0;
        }
        x++;
    }

    for (int i=0; i<N; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
