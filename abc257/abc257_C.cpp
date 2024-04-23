#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    string S;
    cin >> S;
    vector<pair<int, int>> p(N);
    for (int i=0; i<N; i++) {
        cin >> p[i].first;
    }
    for (int i=0; i<N; i++) {
        if (S[i] == '0') {
            p[i].second = 0;
        } else if (S[i] == '1') {
            p[i].second = 1;
        }
    }

    sort(p.begin(), p.end());

    int one = 0, sum = 0;
    int answer = 0;
    for (int i=0; i<N; i++) {
        if (p[i].second == 1) {
            sum++;
        }
    }
    for (int i=0; i<N-1; i++) {
        if (p[i].second == 1) {
            one++;
        }
        if (p[i].first != p[i+1].first) {
            int ans = i+1-one + sum-one;
            answer = max(ans, answer);
        }
    }
    answer = max(answer, sum);
    answer = max(answer, N-sum);

    cout << answer << endl;

    return 0;
}