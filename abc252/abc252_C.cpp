#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }

    int answer = 10000000;
    for (int i=0; i<10; i++) {
        vector<int> a(N);
        for (int j=0; j<N; j++) {
            for (int k=0; k<10; k++) {
                if (char(S[j][k] - 48) == i) {
                    a[j] = k;
                } 
            }
        }
        vector<int> b(10);
        for (int j=0; j<10; j++) {
            b[j] = 0;
        }
        for (int j=0; j<N; j++) {
            b[a[j]]++;
        }
        int ma = 0;
        for (int j=0; j<10; j++) {
            ma = max(ma, b[j]);
        }
        int ans;
        for (int j=0; j<10; j++) {
            if (b[j] == ma) {
                ans = j;
            }
        }
        answer = min(ans + 10*(b[ans]-1), answer);
    }

    cout << answer << endl;

    return 0;
}