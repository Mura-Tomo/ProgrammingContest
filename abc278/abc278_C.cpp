#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N, Q;
    cin >> N >> Q;
    vector<int> T(Q);
    vector<int> A(Q);
    vector<int> B(Q);
    for (int i=0; i<Q; i++) {
        cin >> T[i] >> A[i] >> B[i];
    }

    map<int, set<int>> mp;
    for (int i=0; i<Q; i++) {
        if (T[i] == 1) {
            mp[A[i]].insert(B[i]);
        } else if (T[i] == 2) {
            mp[A[i]].erase(B[i]);
        } else {
            if (mp[A[i]].count(B[i]) && mp[B[i]].count(A[i])) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}