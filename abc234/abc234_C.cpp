#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    ll K;
    cin >> K;

    ll k;
    for (int i=1; i<1000; i++) {
        if ((1ll << (i-1)) <= K && K <= (1ll << i) -1) {
            k = i;
            break;
        }
    }

    string ans = "2";
    ll left = 1ll << (k-1);
    ll right = (1ll << k) - 1;
    for (int i=1; i<k; i++) {
        if ((K - left) < (right - K)) {
            ans = ans + '0';
            right -= (1ll << (k-1-i));
        } else {
            ans = ans + '2';
            left += (1ll << (k-1-i));
        }
    }

    cout << ans << endl;
    
    return 0;
}