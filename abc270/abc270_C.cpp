#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, X, Y;
vector<int> U(200000);
vector<int> V(200000);
vector<vector<int>> e(200001);
vector<int> ans;

bool dfs (int n, int p) {
    if (n == X) {
        ans.push_back(n);
        return true;
    }
    for (int i=0; i<e[n].size(); i++) {
        if (e[n][i] == p) continue;
        if (dfs(e[n][i], n)) {
            ans.push_back(n);
            return true;
        }
    }
    return false;
}

int main (void) {
    cin >> N >> X >> Y;
    for (int i=0; i<N-1; i++) {
        cin >> U[i] >> V[i];
    }
    for (int i=0; i<N-1; i++) {
        e[U[i]].push_back(V[i]);
        e[V[i]].push_back(U[i]);
    }

    dfs (Y, -1);
    for (int i=0; i<ans.size(); i++) {
        cout << ans[i] <<  " ";
    }
    cout << endl;

    return 0;
}