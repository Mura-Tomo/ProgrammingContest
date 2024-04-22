#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i=0; i<N; i++) {
        cin >> H[i];
    }

    for (int i=0; i<N; i++) {
        if (H[i] >= H[i+1]) {
            cout << H[i] << endl;
            return 0;
        }
    }

    return 0;
}