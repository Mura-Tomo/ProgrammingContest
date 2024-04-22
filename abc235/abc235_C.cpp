#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, Q;
    cin >> N >> Q;
    vector<int> a(N);
    for (int i=0; i<N; i++) {
        cin >> a[i];
    }
    vector<int> x(Q);
    vector<int> k(Q);
    for (int i=0; i<Q; i++) {
        cin >> x[i] >> k[i];
    }

    vector<pair<int, int>> p(N+1);
    for (int i=0; i<N; i++) {
        p[i].first = a[i];
        p[i].second = i+1;
    }
    p[N].first = 1000000001;
    p[N].second = 1000000001;
    sort(p.begin(), p.end());

    map<int, vector<int>> mp;
    vector<int> tmp;
    for (int i=0; i<N; i++) {
        if (p[i].first == p[i+1].first) {
            tmp.push_back(p[i].second);
        } else {
            tmp.push_back(p[i].second);
            mp[p[i].first] = tmp;
            tmp.clear();
        }
    }

    for (int i=0; i<Q; i++) {
        if (mp.find(x[i]) == mp.end()) {
            cout << -1 << endl;
        } else {
            if (k[i] <= mp[x[i]].size()) {
                cout << mp[x[i]][k[i]-1] << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0; 
}