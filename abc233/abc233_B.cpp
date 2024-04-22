#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int L, R;
    cin >> L >> R;
    string S;
    cin >> S;

    for (int i=0; i<(R-L+1)/2; i++) {
        swap(S[L+i-1], S[R-i-1]);
    }

    cout << S << endl;

    return 0;
}