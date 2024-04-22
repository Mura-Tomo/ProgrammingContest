#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;

    int len = S.length();
    map<string, int> mp;
    int ans = 0;
    for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) {
            string tmp = S.substr(i, j+1);
            mp[tmp] = 1;
        }
    }
    for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) {
            string tmp = S.substr(i, j+1);
            if (mp[tmp] == 1) {
                ans++;
                mp[tmp] = 2;
            }
        }
    }
    cout << ans << endl;

    return 0;
}