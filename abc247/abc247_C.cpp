#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;

    vector<string> S(N);
    S[0] = "1";
    for (int i=1; i<N; i++) {
        S[i] = S[i-1] + " " + to_string(i+1) + " " + S[i-1];
    }

    cout << S[N-1] << endl;

    return 0;
}