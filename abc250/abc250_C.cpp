#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, Q;
    cin >> N >> Q;
    vector<int> x(Q);
    for (int i=0; i<Q; i++) {
        cin >> x[i];
    }

    vector<int> where(N+1);
    vector<int> ans(N+1);
    where[0] = 0;
    ans[0] = 0;
    for (int i=0; i<N; i++) {
        where[i+1] = i+1;
        ans[i+1] = i+1;
    }

    for (int i=0; i<Q; i++) {
        if (where[x[i]] == N) {
            where[ans[N-1]]++;
            where[ans[N]]--; 
            swap(ans[N], ans[N-1]);
        } else {
            int a = where[x[i]];
            where[ans[a]]++;
            where[ans[a+1]]--;
            swap(ans[a], ans[a+1]);
        }
    }

    for (int i=1; i<=N; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}