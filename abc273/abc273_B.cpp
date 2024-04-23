#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    double X;
    int K;
    cin >> X >> K;

    for (int i=0; i<K; i++) {
        X = X / 10;
        X = round(X);
    }

    ll  Y = (ll) X;
    for (int i=0; i<K; i++) {
        Y = Y * 10;
    }

    cout << Y << endl;

    return 0;
}