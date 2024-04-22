#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    vector<int> B(M);
    for (int i=0; i<M; i++) {
        cin >> A[i] >> B[i];
    }

    set<int> st;
    int count = 0;
    for (int i=0; i<M; i++) {
        if (st.find(A[i]) == st.end() && st.find(B[i]) == st.end()) {
            count++;
        }
        st.insert(A[i]);
        st.insert(B[i]);
    }

    cout << count << endl;
    return 0;
}