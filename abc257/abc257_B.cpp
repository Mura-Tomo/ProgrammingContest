#include <iostream>
using namespace std;

int main (void) {
    int N,K,Q;
    cin >> N >> K >> Q;
    int A[K];
    int L[Q];
    for (int i=0; i<K; i++) {
        cin >> A[i];
    }
    for (int i=0; i<Q; i++) {
        cin >> L[i];
    }

    for (int i=0; i<Q; i++) {
        if (A[L[i]-1] != N && A[L[i]-1] != A[L[i]]-1) {
            A[L[i]-1] += 1;
        }
    }

    for (int i=0; i<K; i++) {
        cout << A[i] << " ";
    }

    return 0;
}