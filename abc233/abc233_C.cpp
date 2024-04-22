#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    ll N, X;
    cin >> N >> X;
    vector<ll> L(N);
    vector<ll> a(N);
    for (int i=0; i<N; i++) {
        cin >> L[i];
        vector<ll> tmp(L[i]);
        for (int i=0; i<L[i]; i++) {
            cin >> tmp[i];
        }
        a[i] = tmp;
    }

    ll ans = 1;
    for (int i=0; i<N; i++) {
        
    }
    
    return 0;
}