#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    ll L, R;
    cin >> L >> R;

    cout << pow(2, 60) << endl;
    for (int i=60; i>=0; i--) {
        if (L <= pow(2, i) &&  pow(2, i) <= R) {
            if (L <= pow(2, i+1) && pow(2, i+1) << R) {
                
            }
        }
    }
    return 0;
}