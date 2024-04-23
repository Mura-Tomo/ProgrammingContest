#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    string s;
    cin >> s;

    int ans = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == 'w') {
            ans += 2;
        } else {
            ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}