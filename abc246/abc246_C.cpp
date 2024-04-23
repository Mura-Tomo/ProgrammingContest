#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long N, K, X;
    cin >> N >> K >> X;
    vector<long long> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<int> B(N);
    vector<int> C(N);
    for (int i=0; i<N; i++) {
        B[i] = A[i] / X;
        C[i] = A[i] % X;
    }

    long long suma = 0;
    long long sumb = 0;
    long long sumc = 0;
    for (int i=0; i<N; i++) {
        suma += A[i];
        sumb += B[i];
    }
    if (sumb >= K) {
        cout << suma - K*X << endl;
    } else if (sumb <= K-N) {
        cout << 0 << endl;
    } else {
        sort(C.begin(), C.end(), std::greater<int>());
        for (int i=0; i<K-sumb; i++) {
            sumc += C[i];
        }
        cout << suma - sumb*X - sumc << endl;
    }

    return 0;
}