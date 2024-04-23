#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long N, P, Q, R;
    cin >> N >> P >> Q >> R;
    vector<long long> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<long long> sum(N+1);
    sum[0] = 0;
    for (int i=1; i<=N; i++) {
        sum[i] = sum[i-1] + A[i-1];
    }

    set<long long> st;
    for (int i=0; i<=N; i++) {
        st.insert(sum[i]);
    }

    for (int i=0; i<=N; i++) {
        int a = st.count(sum[i] + P);
        int b = st.count(sum[i] + P + Q);
        int c = st.count(sum[i] + P + Q + R);
        if (a == 1 && b == 1 && c == 1) {
            cout << "Yes" << endl;
            exit(0);
        }
    }

    cout << "No" << endl;

    return 0;
}