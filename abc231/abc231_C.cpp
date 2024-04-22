#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    vector<int> x(Q);
    for (int i=0; i<Q; i++) {
        cin >> x[i];
    }

    sort(A.begin(), A.end());
    map<int, int> mp;
    for (int i=0; i<N; i++) {
        if (mp[A[i]] == 0) {
            mp[A[i]] = N-i;
        }
    }

    for (int i=0; i<Q; i++) {
        auto itr2 = lower_bound(A.begin(), A.end(), x[i]);
        cout << mp[*itr2] << endl;
    }

    return 0;
}