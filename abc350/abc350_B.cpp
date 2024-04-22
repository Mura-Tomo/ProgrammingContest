#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, Q;
    cin >> N >> Q;
    vector<int> T(Q);
    for (int i=0; i<Q; i++) {
        cin >> T[i];
    }

    vector<int> teeth(N);
    for (int i=0; i<N; i++) {
        teeth[i] = 1;
    }
    for (int i=0; i<Q; i++) {
        if (teeth[T[i]-1] == 1) {
            teeth[T[i]-1] = 0;
        } else {
            teeth[T[i]-1] = 1;
        }
    }
    int count = 0;
    for (int i=0; i<N; i++) {
        if (teeth[i] == 1) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}