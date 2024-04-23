#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N;
    cin >> N; 
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    int ans = 0;
    for (int i=0; i<N; i++) {
        ans += A[i];
    }

    cout << ans << endl;
    
    return 0;
}