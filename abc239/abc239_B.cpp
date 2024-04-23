#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long X;
    cin >> X;

    if (X >= 0) {
        cout << X/10 << endl;        
    } else if (X < 0 && X%10 == 0) {
        cout << X/10 << endl;
    } else {
        cout << X/10 -1 << endl;
    }

    return 0;
}