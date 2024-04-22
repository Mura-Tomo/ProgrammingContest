#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;

    map<char, int> mp;
    for (int i=0; i<S.length(); i++) {
        mp[S[i]] = 0;
    }
    for (int i=0; i<S.length(); i++) {
        mp[S[i]]++;
    }

    vector<int> a(101);
    for (int i=0; i<100; i++) {
        a[i] = 0;
    }
    for (int i=0; i<S.length(); i++) {
        if (mp[S[i]] >= 1) {
            a[mp[S[i]]]++;
            mp[S[i]] = 0;
        }
    }
    for (int i=0; i<101; i++) {
        if (a[i] != 0 && a[i] != 2) {
            cout << "No" << endl;
            exit(0);
        } 
    }
    cout << "Yes" << endl;

    return 0;
}