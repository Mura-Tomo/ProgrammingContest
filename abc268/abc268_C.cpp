#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> p(N);
    for (int i=0; i<N; i++) {
        cin >> p[i];
    }

    vector<int> count(N);

    int center;
    for (int i=0; i<N; i++) {
        if (p[i] > i) {
            center = p[i] - i; 
        } else if (p[i] == i) {
            center = 0;
        } else {
            center = N - (i - p[i]);
        }
        if (center == 0) {
            count[N-1]++;
            count[0]++;
            count[1]++;
        } else if (center == N-1) {
            count[N-2]++;
            count[N-1]++;
            count[0]++;
        } else {
            count[center - 1]++;
            count[center]++;
            count[center + 1]++;
        }
    }

    int ans = 0;
    for (int i=0; i<N; i++) {
        ans = max(ans, count[i]);
    }
    cout << ans << endl;

    return 0;
}