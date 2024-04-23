#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i=0; i<N; i++) {
        cin >> P[i];
    }

    vector<int> a;
    int kabe;
    for (int i=N-1; i>=0; i--) {
        if (P[i] > P[i-1]) {
            a.push_back(P[i]);
        } else {
            a.push_back(P[i]);
            a.push_back(P[i-1]);
            kabe = P[i-1];
            break;
        }
    }

    int fir = 0;
    for (int i=0; i<a.size(); i++) {
        if (kabe > a[i]) {
            fir = max(fir, a[i]);
        }
    }
    for (int i=0; i<N; i++) {
        if (P[i] == kabe) {
            break;
        } else {
            cout << P[i] << " ";
        }
    }
    cout << fir << " ";
    sort(a.rbegin(), a.rend());
    for (int i=0; i<a.size(); i++) {
        if (a[i] != fir) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}