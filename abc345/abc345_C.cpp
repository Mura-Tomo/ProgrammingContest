#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;

    map<char, long long> mp;
    for (int i=0; i<S.length(); i++) {
        mp[S[i]] = 0;
    }
    for (int i=0; i<S.length(); i++) {
        mp[S[i]]++;
    }
    
    long long ans = S.length() * (S.length()-1) / 2;
    int count = 0;
    for (int i=0; i<S.length(); i++) {
        if (mp[S[i]] >= 2) {
            long long tmp = mp[S[i]] * (mp[S[i]]-1) / 2;
            ans -= (tmp);
            mp[S[i]] = 0;
            count = 1;
        }
    }

    if (count == 0) {
        cout << ans << endl;
    } else {
        cout << ans + 1 << endl;
    }

    return 0;
}