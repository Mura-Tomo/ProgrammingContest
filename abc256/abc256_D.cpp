#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> L(N);
    vector<int> R(N);
    for (int i=0; i<N; i++) {
        cin >> L[i] >> R[i];
    }

    vector<pair<int, int>> p(N);
    for (int i=0; i<N; i++) {
        p[i].first = L[i];
        p[i].second = R[i];
    }
    sort(p.begin(), p.end());

    int left, right;
    int count = 0;
    for (int i=0; i<N; i++) {
        if (count == 0) {
            left = p[i].first;  right = p[i].second;
            count++;
            if (i == N-1) {
                cout << left << " " << right << endl;
            }
        } else if (p[i].first <= right && right < p[i].second) {
            right = p[i].second;
            count++;
            if (i == N-1) {
                cout << left << " " << right << endl;
            }
        } else if (p[i].first > right) {
            cout << left << " " << right << endl;
            left = p[i].first;  right = p[i].second;
            if (i == N-1) {
                cout << left << " " << right << endl;
            }
        } else {
            count++;
            if (i == N-1) {
                cout << left << " " << right << endl;
            }
        }
    }

    return 0;
}