#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<ll, ll> > prime_factorize(ll N) {
    vector<pair<ll, ll> > res;
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}


int main (void) {
    ll K;
    cin >> K;

    const auto &res = prime_factorize(K);
    vector<ll> ans;
    for (auto p : res) {
        ans.push_back(p.first * p.second);
    }
    ll x = 0;
    for (int i=0; i<ans.size(); i++) {
        x = max(ans[i], x);
    }
    cout << x << endl;

    return 0;
}