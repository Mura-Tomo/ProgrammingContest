#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S, T;
    cin >> S >> T;

    for (int i=0; i<1000000; i++) {
        if (S[i] != T[i]) {
            cout << i+1 << endl;
            exit(0);
        }
    }

    return 0;
}