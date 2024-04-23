#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N, M;
    cin >> N >> M;
    vector<int> k(M);
    vector<vector<int>> x(M);
    for (int i=0; i<M; i++) {
        cin >> k[i];
        for (int j=0; j<k[i]; j++) {
            int a; cin >> a;
            x[i].push_back(a);
        }
    }

    vector<vector<int>> ans(N, vector<int> (N));
    for (int i=0; i<M; i++) {
        for (int j=0; j<k[i]; j++) {
            for (int l=j+1; l<k[i]; l++) {
                ans[x[i][j]-1][x[i][l]-1] = 1;
            }
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (ans[i][j] != 1) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}