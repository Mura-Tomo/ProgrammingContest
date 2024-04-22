#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> p(M);
    for (int i=0; i<M; i++) {
        cin >> p[i].first >> p[i].second;
    }

    vector<vector<int>> x(N+1);
    for (int i=0; i<M; i++) {
        x[p[i].first].insert(p[i].second);
    }
    for (int i=0; i<M; i++) {
        if (x[p[i].first].size() == 2) {
            if (x[x[p[i].first][1]][0] == )
        }
        if (x[p[i].first].size() >= 3) {
            cout << "No" << endl;
            return 0;
        }
    }
}