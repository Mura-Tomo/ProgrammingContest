#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N, K;
    cin >> N >> K;
    vector<string> S(N);
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }

    vector<vector<int>> alpha(N, vector<int> (26));
    for (int i=0; i<N; i++) {
        for (int j=0; j<26; j++) {
            alpha[i][j] = 0;
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<S[i].length(); j++) {
            alpha[i][char(S[i][j])-97] = 1;
        }
    }

    vector<int> count(26);
    vector<int> ans(1<<N);
    for (int i=0; i<1<<N; i++) {
        ans[i] = 0;
    }
    for (int i=0; i<1<<N; i++) {
        for (int j=0; j<26; j++) {
            count[j] = 0;
        }
        vector<int> bit;
        for (int j=0; j<N; j++) {
            if (i>>j&1) bit.push_back(j);
        }
        for (int j=0; j<bit.size(); j++) {
            for (int k=0; k<26; k++) {
                if (alpha[bit[j]][k] == 1) {
                    count[k]++;
                }
            }
        }
        for (int j=0; j<26; j++) {
            if (count[j] == K) {
                ans[i]++;
            }
        }
    }

    int answer = 0;
    for (int i=0; i<1<<N; i++) {
        answer = max(answer, ans[i]);
    }

    cout << answer << endl;

    return 0;
}