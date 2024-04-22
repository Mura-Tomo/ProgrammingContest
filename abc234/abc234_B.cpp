#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);
    for (int i=0; i<N; i++) {
        cin >> x[i] >> y[i];
    }

    double ans = 0.0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            double tmp = sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
            ans = max(tmp, ans);
        }
    }

    printf("%.10f\n", ans);

    return 0;
}