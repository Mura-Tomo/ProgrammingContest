#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long N;
    cin >> N;
    long long M = N;

    long long keta = 0; 
    while(M != 0) {
        M = M / 10;
        keta++;
    }

    long long tmp = 1;
    for (int i=0; i<keta-1; i++) {
        tmp = tmp * 10;
    }
    tmp = tmp - 1;
    N = (N - tmp) % 998244353;

    vector<long long> f(18);
    for (int i=0; i<18; i++) {
        long long n = 9;
        for (int j=0; j<i; j++) {
            n = (n * 10) % 998244353;
        }
        f[i] = (n * (n+1) / 2) % 998244353;
    }
    vector<long long> sum(18);
    sum[0] = f[0];
    for (int i=1; i<18; i++) {
        sum[i] = (sum[i-1] + f[i]) % 998244353;
    }

    long long ans;
    ans = sum[keta-2] + N*(N+1)/2;
    ans = ans % 998244353;

    if (keta ==  1) {
        ans = 0;
        for (int i=0; i<N; i++) {
            ans += (i+1);
        }
        cout << ans << endl;
    } else {
        cout << ans << endl;
    }
    
    return 0;
}