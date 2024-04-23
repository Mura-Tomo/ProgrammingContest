#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i=0; i<N; i++) {
        cin >> a[i];
    }

    int ball = 0;
    int first = 0;
    int count = 0;
    stack<int> s;
    for (int i=0; i<N; i++) {
        if (a[i] == first) {
            count++;
        } else {
            count = 0;
        }
        s.push(a[i]);
        ball++;
        if (count == first-1) {
            for (int j=0; j<=count; j++) {
                s.pop();
                ball--;
            }
            count = 0;
        }
        if (ball == 0) {
            first = 0;
        } else {
            first = s.top();
        }
        cout << first << ball << endl;
    }

    return 0;
}