#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> T(N);
    for (int i=0; i<N; i++) {
        cin >> S[i] >> T[i];
    }

    map<string, int> mp;
    for (int i=0; i<N; i++) {
        if (mp[S[i]] == 0) {
            mp[S[i]] = T[i];
        } 
    }
    
    int max = 0;
    for (int i=0; i<N; i++) {
        if (mp[S[i]] > max) {
            max = mp[S[i]];
        }
    }

    for (int i=0; i<N; i++) {
        if (T[i] == max && T[i] == mp[S[i]]) {
            cout << i+1 << endl;
            exit(0);
        }
    }

    return 0;
}