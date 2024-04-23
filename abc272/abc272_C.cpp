#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<int> g;
    vector<int> k;
    for (int i=0; i<N; i++) {
        if (A[i] % 2 == 0) {
            g.push_back(A[i]);
        } else {
            k.push_back(A[i]);
        }
    }

    int ans = 0;
    if (N == 2) {
        if ((A[0] + A[1])%2 == 0) {
            cout << A[0] + A[1] << endl;
        } else {
            cout << -1 << endl;
        }
    } else {
        sort(g.begin(), g.end());
        sort(k.begin(), k.end());
        if (g.size() < 2) {
            ans = ans = max(ans, k[k.size()-1] + k[k.size()-2]);
        } else if (k.size() < 2) {
            ans = max(ans, g[g.size()-1] + g[g.size()-2]);
        } else {
            ans = max(ans, g[g.size()-1] + g[g.size()-2]);
            ans = max(ans, k[k.size()-1] + k[k.size()-2]);
        }
        cout << ans << endl;
    }

    return 0;
}