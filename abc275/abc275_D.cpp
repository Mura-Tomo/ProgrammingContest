#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<int, int> memo;

ll f(ll x) {
    if (x == 0) return memo[x] = 1;
    if (memo.count(x)) return memo[x];
    ll res = f(x/2) + f(x/3);
    return memo[x] = res;
}

int main (void) {
    ll N;
    cin >> N;

    ll ans = f(N);
    cout << ans << endl;

    return 0;
}