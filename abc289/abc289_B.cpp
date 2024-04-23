#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;
    vector<int> a(M);
    for (int i=0; i<M; i++) {
        cin >> a[i];
    }

    vector<int> p(N);
    for (int i=0; i<N; i++) {
        p[i] = i+1;
    }

    int count = 1;
    for (int i=1; i<M; i++) {
        if (a[i] == a[i-1] + 1) {
            count++;
        } else {
            for (int j=a[i-]; j<=a[i-1]+count; j++) {
                p[j-1] = a[i-1]+count-j+1;
            }
            count = 1;
        }
        if (i=M-1) {
            for (int j=a[i-1]; j<=a[i-1]+count; j++) {
                p[j-1] = a[i-1]+count-j+1;
            }
        }
    }

    for (int i=0; i<N; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}