#include <bits/stdc++.h>
using namespace std;

int main (void ) {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }

    map<string, int> mp;
    for (int i=0; i<N; i++) {
        mp[S[i]]++;
    }
    string ans = S[0];
    for (int i=1; i<N; i++) {
        if (mp[S[i]] > mp[ans]) {
            ans = S[i];
        }
    }

    cout << ans << endl;

    return 0;
}