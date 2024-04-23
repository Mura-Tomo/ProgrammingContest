#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    vector<int> B(M);
    for (int i=0; i<M; i++) {
        cin >> A[i] >> B[i];
    }

    map<int, vector<int>> mp;
    for (int i=0; i<M; i++) {
        mp[A[i]].push_back(B[i]);
        mp[B[i]].push_back(A[i]);
    }

    for (int i=0; i<N; i++) {
        sort(mp[i+1].begin(), mp[i+1].end());
        cout << mp[i+1].size() << " ";
        for (int j=0; j<mp[i+1].size(); j++) {
            cout << mp[i+1][j] << " ";
        }
        cout << endl;
    }


    return 0;
}