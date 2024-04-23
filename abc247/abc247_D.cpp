#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int Q;
    cin >> Q;
    
    vector<int> q;
    for (int i=0; i<Q; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int x, c;
            cin >> x >> c;
            for (int i=0; i<c; i++) {
                q.push_back(x);
            }
        } else {
            int c;
            cin >> c;
            long long sum = 0;
            for (int i=0; i<c; i++) {
                sum += q.front();
            }
        }
    }

    return 0;
}