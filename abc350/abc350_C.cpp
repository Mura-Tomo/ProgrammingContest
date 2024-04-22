#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<int> index(N+1);
    vector<string> ans(N+1);
    for (int i=0; i<N+1; i++) {
        index[i+1] = 0;
        ans[i] = ' ';
    }
    int count = 0;
    for (int i=0; i<N; i++) {
        index[A[i]] = i;
    }
    for (int i=0; i<N; i++) {
        if (index[A[i]] == i+1) {
            break;
        } else {
            ans[count] = (i+1 + " " + index[i+1]+1);
            index[A[i]] = index[i+1];
            index[i+1] = i;
            count++;
        }
    }

    cout << count << endl;
    for (int i=0; i<N; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}