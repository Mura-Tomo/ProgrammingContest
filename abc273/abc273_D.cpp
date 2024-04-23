#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int H, W, rs, cs;
    cin >> H >> W >> rs >> cs;
    int N;
    cin >> N;
    vector<int> r(N);
    vector<int> c(N);
    for (int i=0; i<N; i++) {
        cin >> r[i] >> c[i];
    }
    int Q;
    cin >> Q;
    vector<char> d(Q);
    vector<int> l(Q);
    for (int i=0; i<Q; i++) {
        cin >> d[i] >> l[i];
    }

    map<int, vector<int>> mp1;
    map<int, vector<int>> mp2;
    for (int i=0; i<N; i++) {
        mp1[r[i]].push_back(c[i]);
        mp2[c[i]].push_back(r[i]);
    }

    for(auto &p : mp1) sort(p.second.begin(), p.second.end());
    for(auto &p : mp2) sort(p.second.begin(), p.second.end());

    for (int i=0; i<Q; i++) {
        if (d[i] == 'L') {
            auto itr = lower_bound(mp1[rs].begin(), mp1[rs].end(), cs);
            if (itr != mp1[rs].begin()) {
                itr--;
                cs = max(cs - l[i], *itr + 1);
            } else {
                cs -= l[i];
            }
            if (cs <= 0 || cs > W) {
                cs = 1;
            }
            cout << rs << " " << cs << endl;
        } else if (d[i] == 'R') {
            auto itr = upper_bound(mp1[rs].begin(), mp1[rs].end(), cs);
            if (itr != mp1[rs].end()) {
                cs = min(cs + l[i], *itr - 1);
            } else {
                cs += l[i];
            }
            if (cs <= 0 || cs > W) {
                cs = W;
            }
            cout << rs << " " << cs << endl;
        } else if (d[i] == 'U') {
            auto itr = lower_bound(mp2[cs].begin(), mp2[cs].end(), rs);
            if (itr != mp2[cs].begin()) {
                itr--;
                rs = max(rs - l[i], *itr + 1);
            } else {
                rs -= l[i];
            }
            if (rs <= 0 || rs > H) {
                rs = 1;
            }
            cout << rs << " " << cs << endl;
        } else {
            auto itr = upper_bound(mp2[cs].begin(), mp2[cs].end(), rs);
            if (itr != mp2[cs].end()) {
                rs = min(rs + l[i], *itr - 1);
            } else {
                rs += l[i];
            }
            if (rs <= 0 || rs > H) {
                rs = H;
            }
            cout << rs << " " << cs << endl;
        }
    }

    return 0;
}