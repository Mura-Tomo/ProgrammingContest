#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (int i=0; i<N; i++) {
        cin >> A[i] >> B[i];
    }
    
    map<int, vector<int>> mp;
    for (int i=0; i<N; i++) {
        mp[A[i]].push_back(B[i]);
        mp[B[i]].push_back(A[i]);
    }
    map<int, int> can;
    int ans = 1;
    for (int i=0; i<mp[1].size(); i++) {
        can[mp[1][i]] = 1;
    }

    for (int i=0; i<N; i++) {
        if (can[A[i]] == 1) {
            for (int j=0; j<mp[A[i]].size(); j++) {
                can[mp[A[i]][j]] = 1;
                ans = max(ans, mp[A[i]][j]);
            }
        }
        if (can[B[i]] == 1) {
            for (int j=0; j<mp[B[i]].size(); j++) {
                can[mp[B[i]][j]] = 1;
                ans = max(ans, mp[B[i]][j]);
            }
        }
    }

    cout << ans << endl;

    return 0;
}