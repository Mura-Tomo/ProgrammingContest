#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, K;
    cin >> N >> K;
    vector<double> A(K);
    for (int i=0; i<K; i++) {
        cin >> A[i];
    }
    vector<double> X(N);
    vector<double> Y(N);
    for (int i=0; i<N; i++) {
        cin >> X[i] >> Y[i];
    }

    double distance;
    double light = 0.0;
    double d;
    for (int i=0; i<N; i++) {
        distance = 10000000;
        for (int j=0; j<K; j++) {
            d = sqrt((X[i]-X[A[j]-1])*(X[i]-X[A[j]-1]) + (Y[i]-Y[A[j]-1])*(Y[i]-Y[A[j]-1]));
            if (d < distance) {
                distance = d;
            }
        }
        if (distance > light) {
            light = distance;
        }
    }

    printf("%.12f\n", light);

    return 0;
}