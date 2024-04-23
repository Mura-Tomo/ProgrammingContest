#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N,X,Y;
    cin >> N >> X >> Y;

    vector<long long> red(N+1);
    vector<long long> blue(N+1);
    for (int i=0; i<N+1; i++) {
        red[i] = 0;
        blue[i] = 0;
    }
    red[N] = 1;

    for (int i=N; i>=2; i--) {
        red[i-1] = red[i] + red[i]*X + blue[i];
        blue[i-1] = (red[i]*X + blue[i]) * Y;
    }

    cout << blue[1] << endl;

    return 0;
}