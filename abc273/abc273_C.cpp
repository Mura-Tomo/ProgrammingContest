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

    sort(A.begin(), A.end());
    vector<int> B;
    B.push_back(A[0]);
    for (int i=0; i<N-1; i++) {
        if (A[i+1] != A[i]) {
            B.push_back(A[i+1]);
        }
    }

    map<int, int> mp;
    vector<int> ans(N);
    for (int i=0; i<B.size(); i++) {
        mp[B[i]] = B.size() - i - 1;
    }

    for (int i=0; i<N; i++) {
        ans[mp[A[i]]]++;
    }

    for (int i=0; i<N; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}