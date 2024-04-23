#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N, X;
    cin >> N >> X;
    vector<int> P(N);
    for (int i=0; i<N; i++) {
        cin >> P[i];
    }

    int ans;
    for (int i=0; i<N; i++) {
        if (P[i] == X) {
            ans = i+1;
        }
    }

    cout << ans << endl;
    
    return 0;
}