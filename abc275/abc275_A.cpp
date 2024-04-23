#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i=0; i<N; i++) {
        cin >> H[i];
    }

    int ans = 0;
    int x;
    for (int i=0; i<N; i++) {
        if (H[i] > ans) {
            ans = max(ans, H[i]);
            x = i+1;
        }
    }

    cout << x << endl;
    return 0;
}