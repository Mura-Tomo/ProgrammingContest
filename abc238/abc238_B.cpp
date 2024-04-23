#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    for (int i=0; i<N-1; i++) {
        A[i+1] += A[i];
        if (A[i+1] >= 360) {
            A[i+1] = A[i+1] % 360;
        }
    }

    vector<int> degree(360);
    for (int i=0; i<360; i++) {
        degree[i] = 0;
    }
    degree[0] = 1;
    for (int i=0; i<N; i++) {
        degree[A[i]] = 1;
    }

    int count;
    int answer = 0;
    for (int i=0; i<360; i++) {
        if (degree[i] == 0) {
            count++;
        } else if (degree[i] == 1) {
            count = 0;
        }
        answer = max(answer, count);
    }

    cout << answer + 1 << endl;

    return 0;
}