#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    ll A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;

    ll abc;
    ll def;
    A = A % 998244353;
    B = B % 998244353;
    C = C % 998244353;
    D = D % 998244353;
    E = E % 998244353;
    F = F % 998244353;
    abc = (A*B) % 998244353;
    abc = (abc*C) % 998244353;
    def = (D*E) % 998244353;
    def = (def*F) % 998244353;

    ll  ans = abc - def;
    if (ans < 0) {
        ans += 998244353;
    }

    cout << ans << endl;

    return 0;
}