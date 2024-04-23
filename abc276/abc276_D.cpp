#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; 
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main (void) {
    int N; 
    cin >> N;
    vector<int> a(N);
    for (int i=0; i<N; i++) {
        cin >> a[i];
    }

    int two = 0, three = 0;
    int x = 1;
    while (x != 0) {
        for (int i=0; i<N; i++) {
            if (a[i] % 2 == 0) {
                two++;
            } else if (a[i] % 3 == 0) {
                three++;
            }
        }
        if (two == N) {
            x++;
            for (int i=0; i<N; i++) {
                a[i] = a[i] / 2;
            }
        }
        if (three == N) {
            x++;
            for (int i=0; i<N; i++) {
                a[i] = a[i] / 3;
            }
        }
    }

    map<int, int> mp;

    for (int i=0; i<N; i++) {
        const auto &res = prime_factorize(a[i]);
        for (auto p : res) {
            for (int i=0; i<p.second; ++i) mp[p.first]++;
        }
    }

    auto itr = mp.begin();
    while (itr != mp.end()) {
        if (itr->first != 2 && itr->first != 3) {
            if (itr->second % N != 0) {
                cout << -1 << endl;
                exit(0);
            }
        }
        ++itr;
    }

    cout << mp[2] + mp[3] << endl;

    return 0;
}