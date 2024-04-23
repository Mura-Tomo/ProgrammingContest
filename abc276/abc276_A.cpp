#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    string S;
    cin >> S;

    int ans = 0;
    for (int i=0; i<S.length(); i++) {
        if (S[i] == 'a') {
            ans = i+1;
        }
    }

    if (ans == 0) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
    
    return 0;
}