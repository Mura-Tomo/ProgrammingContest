#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N,X,Y,Z;
    cin >> N >> X >> Y >> Z;
    vector<pair<int, int>> A(N);
    vector<pair<int, int>> B(N);
    vector<pair<int, int>> C(N);
    for (int i=0; i<N; i++) {
        cin >> A[i].first;
        A[i].second = i;
    }
    for (int i=0; i<N; i++) {
        cin >> B[i].first;
        B[i].second = i;
    }
    for (int i=0; i<N; i++) {
        C[i].first = 200 - A[i].first - B[i].first;
        C[i].second = i;
    }
    for (int i=0; i<N; i++) {
        A[i].first = 100 - A[i].first;
        B[i].first = 100 - B[i].first;
    }
    
    vector<int> answer(N);
    for (int i=0; i<N; i++) {
        answer[i] = 0;
    }
    sort(A.begin(), A.end());
    for (int i=0; i<X; i++) {
        answer[A[i].second] = 1;
    }
    for (int i=0; i<N; i++) {
        if (answer[i] == 1) {
            A[i].first = 1000;
            B[i].first = 1000;
            C[i].first = 2000;
        }
    }
    sort(B.begin(), B.end());
    for (int i=0; i<Y; i++) {
        answer[B[i].second] = 1;
    }
    for (int i=0; i<N; i++) {
        if (answer[i] == 1) {
            A[i].first = 1000;
            B[i].first = 1000;
            C[i].first = 2000;
        }
    }
    sort(C.begin(), C.end());
    for (int i=0; i<Z; i++) {
        answer[C[i].second] = 1;
    }
    
    for (int i=0; i<N; i++) {
        if (answer[i] == 1) {
            cout << i+1 << endl;
        }
    }

    return 0;
}