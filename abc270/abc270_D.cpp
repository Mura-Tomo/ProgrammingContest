#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N, K;
    cin >> N >> K;
    vector<int> A(K);
    for (int i=0; i<K; i++) {
        cin >> A[i];
    }

    int which = 0;
    int t = 0;
    int now = K-1;
    while (N > 0) {
        int s = N / A[now];
        if (s % 2 == 1) {
            which++;
        }
        if (s == 0) {
            now--;
        } else {
            if (s % 2 == 0) {
                t += A[now] * s/2;
            } else if (which % 2 == 1) {
                t += A[now] * (s+1)/2;
            } else {
                t += A[now] * (s-1)/2;
            }
            N -= A[now] * s;
        }
    }

    cout << t << endl;

    return 0;
}