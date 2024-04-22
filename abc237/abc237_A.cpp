#include <bits/stdc++.h>
using namespace std;

int main (void) {
    double N;
    cin >> N;

    if (-2.147483648e9 <= N && N < 2.147483648e9) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}