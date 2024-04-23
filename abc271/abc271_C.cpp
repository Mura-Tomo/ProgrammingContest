#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i=0; i<N; i++) {
        cin >> a[i];
    }

    int d = 0;
    sort(a.begin(), a.end());
    for (int i=0; i<N-1; i++) {
        if (a[i] == a[i+1]) {
            d++;
        }
    }

    int which = 1;
    int max = N;
    int ans = N - d;
    for (int i=0; i<max; i++) {
        if (a[i] == which) {
            which++;
        } else if (a[i] > which) {
            ans--;
            max--;
            max--;
        } else {
            max--;
        }
    }

        cout << ans + (d / 2) << endl;

    return 0;
}