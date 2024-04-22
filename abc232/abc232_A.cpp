#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;

    char a = S[0];
    char b = S[2];

    int x = (int) a - 48;
    int y = (int) b - 48;

    cout << x*y << endl;

    return 0;
}