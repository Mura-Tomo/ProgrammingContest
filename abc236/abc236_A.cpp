#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;
    int a, b;
    cin >> a >> b;

    char tmp;
    tmp = S[a-1];
    S[a-1] = S[b-1];
    S[b-1] = tmp;

    cout << S << endl;

    return 0;
}