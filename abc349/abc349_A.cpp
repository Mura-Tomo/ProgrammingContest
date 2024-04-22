#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N-1; i++) {
        cin >> A[i];
    }

    int sum = 0;
    for (int i=0; i<N-1; i++) {
        sum = sum + A[i];
    }

    cout << -1 * sum << endl;
    return 0;
}