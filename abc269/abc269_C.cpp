#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    ll N;
    cin >> N;

    vector<ll> two;
    vector<ll> one;
    while (N != 0) {
        two.push_back(N % 2);
        N = N / 2;
    }

    for (ll i=two.size()-1; i>=0; i--) {
        if (two[i] == 1) {
            one.push_back(i);
        }
    }

    vector<ll> ans;
    for (ll bit = 0; bit < (1 << one.size()); bit++) {
        vector<ll> S;
        for (ll i=0; i<one.size(); i++) {
            if (bit & (1 << i)) {
                S.push_back(one[i]);
            }
        }
        ll sum = 0;
        for (ll i=0; i<S.size(); i++) {
            sum += (1ll << S[i]);
        }
        ans.push_back(sum);
    }

    sort(ans.begin(), ans.end());

    for (ll i=0; i<ans.size(); i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}