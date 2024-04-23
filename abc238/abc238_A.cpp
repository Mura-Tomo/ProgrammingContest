#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;

    double a = 2*log2(N);
    if (N > a) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}