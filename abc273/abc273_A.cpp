#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N;
    cin >> N;
    
    vector<int> ans(N+1);
    ans[0] = 1;
    for (int i=1; i<=N; i++) {
        ans[i] = i * ans[i-1];
    }

    cout << ans[N] << endl;

    return 0;
}